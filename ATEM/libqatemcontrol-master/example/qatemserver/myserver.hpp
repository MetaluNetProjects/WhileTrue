#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QDebug>
#include "mythread.hpp"

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = 0);
    void StartServer();
    
signals:
    
public slots:

protected:
    void incomingConnection(int socketDescriptor);
    
};

#endif // MYSERVER_H

