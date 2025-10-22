#include<iostream>
#include<string>

void makepizza(std::string toppings,std::string size);

int main()
{
    makepizza("peporoni,olives,pineapple","large");
    makepizza("peppers,paneer","small");
return 0;
}

void makepizza(std::string toppings,std::string size)
{
    std::cout<<"pizza of size:"<<size<<" with toppings:"<<toppings<<std::endl;
}