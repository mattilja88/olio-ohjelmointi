#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    void setBrand(const string& b);
    void setModel(const string& m);
    void setYearModel(int y);
    void printData() const;

};

#endif // CAR_H
