#include "rectangle.h"

Rectangle::Rectangle() {}

double Rectangle::getArea()
{
    return height*width;
}

double Rectangle::getCircum()
{
    return height*2+width*2;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setHeight(double h)
{
    height = h;
}
