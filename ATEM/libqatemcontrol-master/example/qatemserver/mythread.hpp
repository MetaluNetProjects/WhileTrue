#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
class QAtemConnection;

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(int iID, QObject *parent = 0);
    void run();
    
signals:
    void error(QTcpSocket::SocketError socketerror);
    
public slots:
    void readyRead();
    void disconnected();

protected slots:
    void connectToAtem(QString address);
    void onAtemConnected();

    void changeProgramInput(int input);
    void changePreviewInput(int input);

    void setInputType(quint16 input, quint8 type);
    void setVideoFormat(quint8 format);
    
    void toogleDsk1Tie();
    void toogleDsk1OnAir();
    void doDsk1Auto();
    void toogleDsk2Tie();
    void toogleDsk2OnAir();
    void doDsk2Auto();

    void changeTransitionStyle(int style);
    void changeKeysTransition(int btn, bool state);
    void changeTransitionPosition(int pos);

    void changeKeyOnAir(int index, bool state);

private:
    QTcpSocket *socket;
    int socketDescriptor;
    QAtemConnection *m_atemConnection;
    
};

#endif // MYTHREAD_H
