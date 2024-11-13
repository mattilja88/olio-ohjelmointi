#include "chef.h"
#include "italiancheff.h"
#include <iostream>
using namespace std;

int main()
{
    Chef myChef("Gordon Ramsay");
    myChef.makeSalad();
    myChef.makeSoup();
    ItalianCheff myChefItalic("Anthony Bourdain");
    myChefItalic.makeSalad();
    myChefItalic.makeSoup();
    myChefItalic.makePasta();
    myChefItalic.getName();
    return 0;
}
