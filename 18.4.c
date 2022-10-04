#include<stdio.h>
void uppercase(char u[],int n);
int main()
{
    char a[10];
    uppercase(a,10);
    return 0;
}

void uppercase(char u[],int n)
{
    int i;
    printf("Enter string ");
    gets(u);
    for(i=0;u[i];i++)
    {
        if(u[i]>='a' && u[i]<='z')
        {
            u[i]-=32;
        }
        printf("%c",u[i]);
    }
}
