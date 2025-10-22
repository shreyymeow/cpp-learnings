#include<iostream>

int main()
{
    int a=5,b=2;
    //arithmatic operators
    std::cout<<a+b<<std::endl;
    std::cout<<a-b<<std::endl;
    std::cout<<a*b<<std::endl;
    std::cout<<a/b<<std::endl;
    std::cout<< a%b<<std::endl;


    //logical 
    bool israining= true, iscoffee=false;
    std::cout<<(israining && iscoffee)<<std::endl;
    std::cout<< (israining||iscoffee)<<std::endl;
    std::cout<< (!israining)<<std::endl;


    //assignment operator 
    int c= 3;
    c+=3;
    std::cout<<c<<std::endl;
    return 0;
}