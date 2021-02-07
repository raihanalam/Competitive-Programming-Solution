#include<iostream>
using namespace std;
class First_Recuring
{
private:
    char str[20];
public:
    First_Recuring()
    {
        cin>>str;
    }
    char recuring()
    {
        for(int i=0;str[i] != '\0';i++)
        {
            for(int j=i;str[j] != '\0';j++)
            {
                if(str[i] == str[j+1])
                    return str[i];
            }
        }
    }
};
int main()
{
    First_Recuring ob1;
    cout<<ob1.recuring();
}
