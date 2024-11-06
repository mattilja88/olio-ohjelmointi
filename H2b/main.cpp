#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> myCarList;

    Car myCar1("Volvo", "V40", 2010);
    Car myCar2("VW", "Touran", 2022);
    Car myCar3("Tesla", "ModelY", 2020);

    myCarList.push_back(myCar1);
    myCarList.push_back(myCar2);
    myCarList.push_back(myCar3);

    cout << "Toisen alkion tiedot: " << endl;
    myCarList[1].printData();


    cout << "Kaikkien autojen tiedot: " << endl;
    for (int i = 0; i < myCarList.size(); i++){
        cout << i+1 << ".auto" << endl;
        myCarList[i].printData();
    }
    return 0;
}
