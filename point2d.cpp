#include "point2d.h"


Point2D::Point2D(): x_coord(0.0), y_coord(0.0){

}

Point2D::Point2D(double x, double y): x_coord(x), y_coord(y){

}

void Point2D::set(double x, double y){
    x_coord=x;
    y_coord=y;
}

double Point2D::getX(){

    return x_coord;
}

double Point2D::getY(){
    return y_coord;
}

