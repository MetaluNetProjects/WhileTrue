#include "console.hpp"
#include "qatemconnection.h"
#include "qatemmixeffect.h"
#include "qatemdownstreamkey.h"

Console::Console()
{
    notifier = new QSocketNotifier(fileno(stdin), QSocketNotifier::Read, this);
        m_atemConnection = new QAtemConnection(this);

    connect(m_atemConnection, SIGNAL(connected()),
            this, SLOT(onAtemConnected()));
            
    m_atemConnection = new QAtemConnection(this);

    connect(m_atemConnection, SIGNAL(connected()),
            this, SLOT(onAtemConnected()));
}

void Console::run()
{
    std::cout << "First message" << std::endl;
    std::cout << "> " << std::flush;
    connect(notifier, SIGNAL(activated(int)), this, SLOT(readCommand()));    
}

// ----------- split stings util ------------
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

int s2int(std::string &s){
    return (int)strtol(s.c_str(), NULL, 10);
}

// ----------- \ split stings util ------------

void Console::readCommand()
{
    std::string line;
    std::vector<std::string> elems;
    
    std::getline(std::cin, line);
    if (std::cin.eof() || line == "quit") {
        std::cout << "Good bye!" << std::endl;
        emit quit();
    } else {
        std::cout << "Echo: " << line << std::endl;
        //std::cout << "> " << std::flush;
        return;
        split(line.substr(0,line.length()-1), ' ', elems); // remove last char (';') and split in vector
        if(elems.size() < 1) return;
        else if((elems[0]=="connect")&&(elems.size() > 1)) connectToAtem(QString(elems[1].c_str()));
        else if((elems[0]=="program")&&(elems.size() > 1)) changeProgramInput(s2int(elems[1]));
        else if((elems[0]=="preview")&&(elems.size() > 1)) changePreviewInput(s2int(elems[1]));
        else if((elems[0]=="transition")&&(elems.size() > 1)) changeTransitionPosition(s2int(elems[1]));
        else if((elems[0]=="style")&&(elems.size() > 1)) changeTransitionStyle(s2int(elems[1]));
        else std::cout << "Echo: " << line << std::endl;
        
        //std::cout << "> " << std::flush;

    }
}

void Console::connectToAtem(QString address)
{
    //QString address = QInputDialog::getText(this, tr("Connect To ATEM"), tr("Address:"));

    if(!address.isEmpty())
    {
        m_atemConnection->connectToSwitcher(QHostAddress(address));
    }
}

void Console::onAtemConnected()
{
    std::cout << "Atem Connected !" << std::endl;
}

void Console::changeProgramInput(int input)
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

void Console::changePreviewInput(int input)
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

void Console::toogleDsk1Tie()
{
    m_atemConnection->downstreamKey(0)->setTie(!m_atemConnection->downstreamKey(0)->tie());
}

void Console::toogleDsk1OnAir()
{
    m_atemConnection->downstreamKey(0)->setOnAir(!m_atemConnection->downstreamKey(0)->onAir());
}

void Console::doDsk1Auto()
{
    m_atemConnection->downstreamKey(0)->doAuto();
}

void Console::toogleDsk2Tie()
{
    m_atemConnection->downstreamKey(1)->setTie(!m_atemConnection->downstreamKey(1)->tie());
}

void Console::toogleDsk2OnAir()
{
    m_atemConnection->downstreamKey(1)->setOnAir(!m_atemConnection->downstreamKey(1)->onAir());
}

void Console::doDsk2Auto()
{
    m_atemConnection->downstreamKey(1)->doAuto();
}


void Console::changeTransitionStyle(int style)
{
    m_atemConnection->mixEffect(0)->setTransitionType(style);
}

void Console::changeKeysTransition(int btn, bool state)
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

void Console::changeTransitionPosition(int pos)
{
    m_atemConnection->mixEffect(0)->setTransitionPosition(pos);
}

void Console::changeKeyOnAir(int index, bool state)
{
    m_atemConnection->mixEffect(0)->setUpstreamKeyOnAir(index, state);
}

