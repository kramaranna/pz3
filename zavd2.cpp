//ЗАВДАННЯ 2
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, a, b, h, S, R, PI = 3.14159265358979;    //задання змінних
    cout<<"Введіть номер від 1 до 4: ";
    cin>>n;
    if (n==1)
    {
        cout<<"Введіть a та b: ";
        cin>>a>>b;
        S=a*b;
        cout<<"S = "<< S <<endl;
    }
   if (n==2)
    {
        cout<<"Введіть a та h: ";
        cin>>a>>h;
        S=(a*h)/2;
        cout<<"S = "<< S <<endl;
    }
    if (n==3)
    {
        cout<<"Введіть a, b та h: ";
        cin>>a>>b>>h;
        S=((a+b)/2)*h;
        cout<<"S = "<< S <<endl;
    }
    if (n==4)
    {
        cout<<"Введіть R: ";
        cin>>R;
        S=PI*R*R;
        cout<<"S = "<< S <<endl;
    }
    return 0;
}
