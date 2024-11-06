#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //h2a vaihe1:
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Yaris");
    myCar.setYearModel(2012);
    cout << "h2a vaihe1, Auton tulosteet: " << endl;
    myCar.printData();

    //h2a vaihe2:
    Rectangle *myRectangle = new Rectangle;
    myRectangle->setWidth(5);
    myRectangle->setHeight(6);
    double area = myRectangle->getArea();
    double circum = myRectangle->getCircum();
    cout << "\nh2a vaihe2, suorakulmion tulosteet: " << endl;
    cout << "Pinta-ala: " << area << endl;
    cout << "Ympärysmitta: " << circum << endl;
    delete myRectangle;
    myRectangle = nullptr;


    //h2a vaihe3:
    unique_ptr<Student> myStudent = make_unique<Student>();
    myStudent->setName("Kalle Opiskelija");
    myStudent->setStudentNumber(15323456);
    myStudent->setAverage(9.9);
    cout << "\nh2a vaihe3, opiskelijan tulosteet: " << endl;
    cout << "Nimi: " << myStudent->getName() << endl;
    cout << "Opiskelijanumero: " << myStudent->getStudentNumber() << endl;
    cout << "Keskiarvo: " << myStudent->getAverage() << endl;

    return 0;
}
