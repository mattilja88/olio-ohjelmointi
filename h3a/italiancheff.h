#ifndef ITALIANCHEFF_H
#define ITALIANCHEFF_H
#include "chef.h"


class ItalianCheff : public Chef
{
public:
    ItalianCheff(string);
    void getName();
    void makePasta();
    ~ItalianCheff();
};

#endif // ITALIANCHEFF_H
