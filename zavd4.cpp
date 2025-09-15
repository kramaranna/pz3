//ЗАВДАННЯ 4
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y;    //задання змінних
    cout<<"Введіть x: ";
    cin>>x;
    if (x<0)
    {
        y=tan(fabs(x));
        cout<<"y = "<< y <<endl;
    }
    if (0<=x, x<5)
    {
        y=x*x*x;
        cout<<"y = "<< y <<endl;
    }
    if (x>=5)
    {
        y=log10(x);
        cout<<"y = "<< y <<endl;
    }
  
    return 0;
}
