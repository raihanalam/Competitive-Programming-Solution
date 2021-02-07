#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int randomn,guess,score=0;
    while(1)
    {
        cout<<"Score:"<<score<<endl;;
        randomn=rand()%5+1;
        cout<<"Guess number (1-5):"<<endl;
        cin>>guess;
        if(guess==randomn)
        {
            score++;
            cout<<"You got point"<<endl;
        }
        else
            cout<<"Number was: "<<randomn<<" Try again"<<endl;

    }
}
