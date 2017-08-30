/*********************************************************************
** Author:  Bryan Konshak
** Date:  4/26/2016
** Description:  Box class that takes 3 doubles and passes to set method
                 with methods that calculate and return surface area and volume.
**************************************************************************/

#include <iostream>
#include "Box.hpp"
using namespace std;

/******************************************************************************
**  Description:  default constructor: Set mothods to initialize fields to one
**
******************************************************************************/

Box::Box()
{   setHeight(1);
    setWidth(1);
    setLength(1);
}

/**********************************************************************************
** Description: constructor that takes three doubles and passes them to set methods
**              to initialize the fields
**********************************************************************************/

Box::Box(double h, double w, double l)
{    setHeight(h);
     setWidth(w);
     setLength(l);
}

void Box::setHeight(double h)
{   height = h;
}

void Box::setWidth (double w)
{   width = w;
}

void Box::setLength (double l)
{   length = l;}
/****************************************************************************
** Description:  getVolume function that return volume with formula l*h*w
**
******************************************************************************/
double Box::getVolume()
{   return (length * width * height);
}

/************************************************************************************
** Description:  getSurfaceArea function with formula 2*l*h +2*w*h + 2*l*w
**
**************************************************************************************/
double Box::getSurfaceArea()
{   return ((2 * length * height) + (2 * width * height)+
           (2 * length * width));
}

/*************************************************************/
int main()
{
    Box box1(2.4, 7.1, 5.0);
    Box box2;
    Box box3;
    double height, width, length;

    cout << "What's the height?" << endl;
    cin >> height;
    box3.setHeight(height);
    cout << "What's the width?" << endl;
    cin >> width;
    box3.setWidth(width);
    cout << "What's the length? " << endl;
    cin >> length;
    box3.setLength(length);
    double area = box3.getSurfaceArea();
    cout << "The surface area of the box is " << area << endl;
    double volume = box3.getVolume();
    cout << "The volume of the box is " << volume << endl;

    double volume1 = box1.getVolume();
    cout << "The volume of box 1 is " << volume1 << endl;
    double surfaceArea1 = box1.getSurfaceArea();
    cout << "The surface area of box 1 is " << surfaceArea1 << endl;
    double volume2 = box2.getVolume();
    cout << "The volume of box 2 is " << volume2 << endl;
    double surfaceArea2 = box2.getSurfaceArea();
    cout << "The surface area of box 2 is " << surfaceArea2 << endl;    
        
    return 0;
}

