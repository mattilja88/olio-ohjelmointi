#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <iostream>
#include <QCoreApplication>
using namespace  std;

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    ExampleClass();
    void startToWait();

signals:
    void readyToSay();

public slots:
    void sayHelloSlot();
};

#endif // EXAMPLECLASS_H
