#include "mythread.hpp"
#include "qatemconnection.h"
#include "qatemmixeffect.h"
#include "qatemdownstreamkey.h"
#include <iostream>
#include <stdio.h>

MyThread::MyThread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
    m_atemConnection = new QAtemConnection(this);
    connect(m_atemConnection, SIGNAL(connected()),
            this, SLOT(onAtemConnected()));

}

void MyThread::run()
{
    // thread starts here
    qDebug() << socketDescriptor << " Starting thread";
    socket = new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()),Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()),Qt::DirectConnection);

    qDebug() << socketDescriptor << " Client connected";
    


    // make this thread a loop
    exec();
}

void MyThread::readyRead()
{
    QByteArray Data = socket->readAll();

    //qDebug() << socketDescriptor << " Data in: " << Data;
    QString line(Data);
    QStringList commands = line.split(";");
    for(int c=0 ; c < commands.size() ; c++) {
        //qDebug() << commands[c];
        QStringList elems = commands[c].simplified().split(" ");
        if(elems.size()>0){
            if((elems[0]=="connect")&&(elems.size()>1)) connectToAtem(elems[1]);
        else if((elems[0]=="program")&&(elems.size() > 1)) changeProgramInput(elems[1].toInt());
        else if((elems[0]=="preview")&&(elems.size() > 1)) changePreviewInput(elems[1].toInt());
        else if((elems[0]=="transition")&&(elems.size() > 1)) changeTransitionPosition(elems[1].toInt());
        else if((elems[0]=="style")&&(elems.size() > 1)) changeTransitionStyle(elems[1].toInt());
        else if((elems[0]=="input")&&(elems.size() > 2)) setInputType(elems[1].toInt(), elems[2].toInt());
        else if((elems[0]=="format")&&(elems.size() > 1)) setVideoFormat(elems[1].toInt());
        }
    }
    //socket->write(Data);
}

void MyThread::disconnected()
{
    qDebug() << socketDescriptor << " Disconnected";
    socket->deleteLater();
    exit(0);
}

//-----------------------------------------------------------


void MyThread::connectToAtem(QString address)
{
    //QString address = QInputDialog::getText(this, tr("Connect To ATEM"), tr("Address:"));

    if(!address.isEmpty())
    {
        m_atemConnection->connectToSwitcher(QHostAddress(address));
    }
}

void MyThread::onAtemConnected()
{
    std::cout << "Atem Connected !" << std::endl;
    socket->write("connected;");
}

void MyThread::changeProgramInput(int input)
{
    QAtemMixEffect *me = m_atemConnection->mixEffect(0);

    if(me)
    {
        me->changeProgramInput(input);
    }
    else
    {
        qCritical() << "No M/E found!";
    }
}

void MyThread::changePreviewInput(int input)
{
    QAtemMixEffect *me = m_atemConnection->mixEffect(0);

    if(me)
    {
        me->changePreviewInput(input);
    }
    else
    {
        qCritical() << "No M/E found!";
    }
}

void MyThread::setInputType(quint16 input, quint8 type)
{
   std::cout << "input "<< input <<" : type "<<(int)type<< std::endl;
   m_atemConnection->setInputType(input, type);
}

void MyThread::setVideoFormat(quint8 format)
{
    m_atemConnection->setVideoFormat(format);
}

void MyThread::toogleDsk1Tie()
{
    m_atemConnection->downstreamKey(0)->setTie(!m_atemConnection->downstreamKey(0)->tie());
}

void MyThread::toogleDsk1OnAir()
{
    m_atemConnection->downstreamKey(0)->setOnAir(!m_atemConnection->downstreamKey(0)->onAir());
}

void MyThread::doDsk1Auto()
{
    m_atemConnection->downstreamKey(0)->doAuto();
}

void MyThread::toogleDsk2Tie()
{
    m_atemConnection->downstreamKey(1)->setTie(!m_atemConnection->downstreamKey(1)->tie());
}

void MyThread::toogleDsk2OnAir()
{
    m_atemConnection->downstreamKey(1)->setOnAir(!m_atemConnection->downstreamKey(1)->onAir());
}

void MyThread::doDsk2Auto()
{
    m_atemConnection->downstreamKey(1)->doAuto();
}


void MyThread::changeTransitionStyle(int style)
{
    m_atemConnection->mixEffect(0)->setTransitionType(style);
}

void MyThread::changeKeysTransition(int btn, bool state)
{
    if(btn == 0)
    {
        m_atemConnection->mixEffect(0)->setBackgroundOnNextTransition(state);
    }
    else
    {
        m_atemConnection->mixEffect(0)->setUpstreamKeyOnNextTransition(btn - 1, state);
    }
}

void MyThread::changeTransitionPosition(int pos)
{
    m_atemConnection->mixEffect(0)->setTransitionPosition(pos);
}

void MyThread::changeKeyOnAir(int index, bool state)
{
    m_atemConnection->mixEffect(0)->setUpstreamKeyOnAir(index, state);
}

