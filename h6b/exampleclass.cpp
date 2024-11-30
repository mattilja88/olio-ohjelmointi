#include "exampleclass.h"

ExampleClass::ExampleClass()
{
    qDebug()<<"Start";
    QObject::connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug()<<"End";
}

void ExampleClass::startToWait()
{
    QThread::msleep(5000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
