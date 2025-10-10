#include <iostream>
using namespace std;

  int add(int a,int b)
    {
        return a+b;
    }

int main()
{
  int a,b;
  cout << "enter value of a\n" << "enter value of b"<< endl;
  cin>> a>>b;
  int sum=add(a,b);
  cout<<"sum\n"<<sum;


}
