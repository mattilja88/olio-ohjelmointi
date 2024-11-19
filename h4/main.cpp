#include "car.h"
#include "wheel.h"
#include "engine.h"

#include <iostream>
using namespace std;

int main()
{
    Car myCar("Corolla", "Toyota");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();
    return 0;
}
