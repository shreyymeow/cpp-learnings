#include<iostream>
using namespace std;

void changenum(int n){
    n=100;
}
void refnum(int &n){
    n=200;
}

int main()
{
    int a=10;
    changenum(a);
    cout<<"chnaged num by value"<< a<<endl;
    refnum(a);
    cout<<"changed num using reference"<< a<<endl;
    return 0;
}