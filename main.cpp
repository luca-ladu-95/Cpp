#include <iostream>
#include <point2d.h>

using namespace std;

int main()
{

    Point2D p1;
    Point2D p2(0.5,0.5);
    Point2D* p3 = new Point2D(0.1,0.2);

    std::cout << "P1 X:" << p1.getX() << std::endl;



    delete  p3;






    return 0;

}


