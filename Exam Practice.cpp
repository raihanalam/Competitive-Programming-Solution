#include<iostream>
using namespace std;
class triangle
{
protected:
    int base;
    int height;
    int area;
public:
    triangle(int a,int b)
    {
        base=a;
        height=b;
    }
    void calculate()
    {
        area=0.5*base*height;
    }
};
class printx:public triangle
{
public:
    void output()
    {
        cout<<area;
    }
};
int main()
{
    printx ob;
    int a,b;
    cin>>a>>b;
    ob.calculate();
    ob.output();
}
