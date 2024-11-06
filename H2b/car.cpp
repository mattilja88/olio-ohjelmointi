#include "car.h"

Car::Car() {}

void Car::printData()
{
    cout << "Brändi: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << "\n" << endl;
}

Car::Car(string b, string m, int ym)
{
    brand = b;
    model = m;
    yearModel = ym;
}
