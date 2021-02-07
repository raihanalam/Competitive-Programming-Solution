#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int i,j,t,n,l;
    scanf("%d",&n);

    for(t=0;t<n;t++)
    {
        fflush(stdin);
        gets(str);
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            {
                str[i]=str[i]+3;

            }

        }

        int k=0;
        for( j=l-1;j>=0;j--)
        {
            str1[k]=str[j];
            k++;
        }
        str1[k]='\0';

        for(i=l/2;i<l;i++)
        {
            str1[i]=str1[i]-1;
        }
        printf("%s\n",str1);
    }
    return 0;
}
