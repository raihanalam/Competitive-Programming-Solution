#include<bits/stdc++.h>
#define pi 3.14159
using namespace std;
int main()
{
    double a,b,c,triangle,circle,trapezium,square,rectangle;
    cin>>a>>b>>c;
    triangle=0.5*a*c;
    circle=pi*(c*c);
    trapezium=((a+b)/2)*c;
    square=b*b;
    rectangle=a*b;

    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<triangle<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circle<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapezium<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<square<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<rectangle<<endl;

    return 0;
}
