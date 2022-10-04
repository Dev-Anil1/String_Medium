#include<stdio.h>
void alphanumeric(char al[],int n);

int main()
{
    char a[10];
    alphanumeric(a,10);
    return 0;
}

void alphanumeric(char al[],int n)
{
    int i,flag=0;
    int count=0;
    printf("Enter string ");
    gets(al);
    for(i=0;al[i];i++)
    {
        if((al[i]>='a' && al[i]<='z') || ( al[i]>='A' && al[i]<='Z'))
        {
            flag++;
        }
        if(al[i]>='0' && al[i]<='9')
        {
            count++;
        }
    }
    if(flag>0 && count>0 )
        printf("alphanumeric");
    else
        printf("nope");

}

