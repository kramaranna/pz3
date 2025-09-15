//ЗАВДАННЯ 7
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;   
    cout<<"Чи існує трикутник із заданими сторанами?"<<endl;
    cout<<"Введіть сторони трикутника a,b,c: ";
    cin>>a>>b>>c;
    if ((a+b)>c and (a+c>b) and (b+c)>a)
    {
       cout<<"Такий трикутник існує"<<endl;
    }
    else 
    {
       cout<<"Такого трикутника НЕ існує"<<endl;
    }
    return 0;
}