#include<stdio.h>
#include<string.h>
int lenstring(char a[] ,int n);
int main()
{
    char a[10];
    int i;
    i=lenstring(a,10);
    printf("lenth of string is %d",i);
    return 0;
}

int lenstring(char a[] ,int n)
{
    int i;
    printf("Enter string ");
    gets(a);
    for(i=0;a[i]!='\0';i++);
    return i;
}
