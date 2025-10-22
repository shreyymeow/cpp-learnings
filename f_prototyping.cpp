#include<iostream>

void makedish();
void plating();
void servedish();

int main()
{
    makedish();
    plating();
    servedish();
    return 0;
}

void makedish()
{
    std::cout<<"make dish"<<std::endl;

}
void plating()
{
    std::cout<<"plate the dish"<<std::endl;
}

void servedish()
{
    std::cout<<"serve dish"<<std::endl;
}