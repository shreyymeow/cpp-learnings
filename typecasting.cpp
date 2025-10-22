#include<iostream>

int main()
{
double a=6.23456;
int b=3;
int c= int(a);
std::cout<< c<<std::endl;
std::cout<< typeid(c).name()<<std::endl;
}