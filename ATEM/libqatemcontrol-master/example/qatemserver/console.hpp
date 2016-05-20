#pragma once

#include <QObject>
//#include <QString>
#include <QSocketNotifier>
#include <iostream>
#include <stdio.h>
class QAtemConnection;

class Console : public QObject
{
    Q_OBJECT;

public:
    Console();

    void run();

signals:
    void quit();

private:
    QSocketNotifier *notifier;
    QAtemConnection *m_atemConnection;

private slots:
    void readCommand();
    void connectToAtem(QString address);
    void onAtemConnected();

    void changeProgramInput(int input);
    void changePreviewInput(int input);

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

};


