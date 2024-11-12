#include "italiancheff.h"

ItalianCheff::ItalianCheff(string n) : Chef(n)
{
    name = n;
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

void ItalianCheff::getName()
{
    cout << "name of the Italian Chef is " << name << endl;
}

void ItalianCheff::makePasta()
{
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

ItalianCheff::~ItalianCheff()
{
    cout << "ItalianChef " << name << " destructori" << endl;
}
