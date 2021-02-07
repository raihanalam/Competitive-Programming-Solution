#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    char sentence[100],word1[20],word2[20];
    strcpy(word1,"lala.");
    strcpy(word2,"miao.");
    cin>>n;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        gets(sentence);
        if(strstr(sentence,word1) !=NULL && strstr(sentence,word2) !=NULL )
        {
            cout<<"OMG>.< I don't know!"<<endl;
        }
        else if( strstr(sentence,word1) != NULL )
        {
            cout<<"Freda's"<<endl;
        }
        else if( strstr(sentence,word2) != NULL )
        {
            cout<<"Rainbow's"<<endl;
        }
        else
        {
            cout<<"OMG>.< I don't know!"<<endl;
        }
    }
}
