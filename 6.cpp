#include <iostream>
using namespace std;
int main()
{
    int num;
    float f;
    double d;
    const int c=5;
    cout << "enter num"<< endl;
    cin>> num;
    cout<<"enterr float"<<endl;
    cin>>f;
    cout<<"enter double"<<endl;
    cin>>d;
     f=d;
    cout<< "integer\n" << num<<"address"<<&num<<""<<endl;
    cout<< "float\n" << f<<"address"<<&f<<""<<endl;
    cout<< "double\n" << d<<"address"<<&d<<""<<endl;


   

}