#include<iostream>
using namespace std;
int main()
{
    long long m,n,tmp1,tmp2;
    int i;
    while(cin>>m>>n)
    {

        if(m<=20 && n<=20)
        {
            tmp1 = 1;
            tmp2 = 1;
            for (i = m; i > 0; --i){
                tmp1 *= m;
                m--;
            }

            for (i = n; i > 0; --i)
            {
                tmp2 *= n;
                n--;
            }
        }
        cout<<tmp1+tmp2<<endl;
    }
}
