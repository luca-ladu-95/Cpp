#ifndef POINT2D_H
#define POINT2D_H


class Point2D
{
public:
    Point2D();
    Point2D(double x,double y);

    void set(double x,double y);

    double getX();
    double getY();


private:
    double x_coord;
    double y_coord;

};


#endif // POINT2D_H
