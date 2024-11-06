#include "car.h"

Car::Car() {}

void Car::setBrand(const string &b)
{
    brand = b;
}

void Car::setModel(const string &m)
{
    model = m;
}

void Car::setYearModel(int y)
{
    yearModel = y;
}

void Car::printData() const
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;
}
