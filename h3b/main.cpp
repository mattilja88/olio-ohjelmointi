#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    Animal *myAnimal = new Animal;
    Dog *myDog = new Dog;
    myAnimal->callOut();
    myDog->callOut();

    delete myAnimal;
    delete myDog;
    myAnimal = nullptr;
    myDog = nullptr;
    return 0;
}
