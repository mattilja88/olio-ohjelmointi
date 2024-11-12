#include "dog.h"

Dog::Dog() {}

void Dog::callOut()
{
    cout << "Koira haukkuu" << endl;
}

Dog::~Dog()
{
    cout << "Dog desktruktorin varmistus" << endl;
}
