#include <iostream>
using namespace std;

int square(int n)
{
    return n*n;
}

int main()
{
    int a;
    cout<<"enter value of a"<<endl;
    cin>>a;
   
    int sq= square(a);
    cout<<"square of this number is \n"<< sq;
}