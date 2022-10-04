#include<stdio.h>
#include<string.h>
void revstring(char a[] ,int n);
int main()
{
    char a[10];
    revstring(a,10);
    return 0;
}

void revstring(char a[] ,int n)
{
    int i,j;
    int temp;
    printf("Enter string ");
    gets(a);
    for(i=0,j=strlen(a)-1;i<=j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("Reverse of string is %s",a);
}
