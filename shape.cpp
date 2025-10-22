#include<iostream>

void area(int breadth,int width)
{
    int area=breadth*width;
    std::cout<<"area of rectangle "<<area<<std::endl;
}
void area(double radius)
{
    double area=radius*radius*3.14;
    std::cout<<"area of circle "<<area<<std::endl;
}


int main()
{
area(2,3);
area(4);




}