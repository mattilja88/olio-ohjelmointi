#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass esimerkkiLuokka;
    esimerkkiLuokka.startToWait();

    return a.exec();
}
