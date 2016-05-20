#include "myserver.hpp"
#include <QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    /*Console console;
    console.run();
    QObject::connect(&console, SIGNAL(quit()), &app, SLOT(quit()));*/
    MyServer Server;
    Server.StartServer();
	
    return app.exec();
}
