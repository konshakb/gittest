/*************************************************************
** Author: Bryan Konshak
** Date:  4/26/2015
** Description:  Box.hpp header file
***************************************************************/



// Box.hpp is the Box class specification file
#ifndef BOX_HPP  //include guard
#define BOX_HPP  //

// Box class declaration

class Box
{
    private:
        double height;
        double width;
        double length;

    public:
        Box();
        Box(double h, double w, double l);
        void setHeight(double h);
        void setWidth (double w);
        void setLength (double l);
        double getVolume();
        double getSurfaceArea();
};
#endif
        

