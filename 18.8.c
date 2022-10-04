#include<stdio.h>

int countword(char d[],int n);

int main()
{
    char a[50];
    int l=countword(a,50);
    printf("%d",l);
    return 0;
}

int countword(char a[],int n)
{
    int i,count =0;
    int start=0,end=0,flag=0;
    printf("Enter sentence ");
    gets(a);

    while(a[i]!='\0')
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        count++;
        if(flag==1)
            break;
        start=end++;
        i++;
    }

    return count;
}
