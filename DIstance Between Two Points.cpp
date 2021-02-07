#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,a,b,result;
    cin>>x1>>y1;
    cin>>x2>>y2;
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    result=sqrt((a+b));
    cout<<fixed<<setprecision(4)<<result<<endl;

    return 0;
}
