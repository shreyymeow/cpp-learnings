#include<iostream>
using namespace std;

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    int a,b;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter vaue of b"<< endl;
    cin>>b;
    int d=sub(a,b);
    cout<<"difference of these two\n"<< d;

}