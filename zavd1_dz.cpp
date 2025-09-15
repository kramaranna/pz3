#include <iostream>
using namespace std;

int main() 
{
    double a=3, b=2, c=4, d=-5;
    double ax=7, bx=2, cx=40, dx=-5;
    double ay=3, by=7, cy=4, dy=40;
// визначники
    double D  = a*d-b*c;  
    double Dx  = ax*dx-bx*cx;  
    double Dy  = ay*dy-by*cy;   
    cout << "D  = " << D  << endl;
    cout << "Dx = " << Dx << endl;
    cout << "Dy = " << Dy << endl;

    if (D != 0) 
    {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Розв'язок системи:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } 
    else 
    {
        if (Dx == 0 and Dy == 0)
            cout << "Система має безліч розв'язків" << endl;
        else
            cout << "Система не має розв'язків" << endl;
    }

    return 0;
}