#include<iostream>
int main(){
float pi=3.14;
//convert this from one data type to another called as type casting and convert it to int
int fl_to_int =(int)pi;
std::cout<<"pi value is \n"<< pi;
std::cout<<"data type of pi \n"<<typeid(pi).name()<<std::endl;
std::cout<<"data type of pi after conversion\n"<<typeid(fl_to_int).name()<<std::endl;
return 0;
}