#include<stdio.h>
void lowercase(char l[],int n);
int main()
{
    char a[10];
    lowercase(a,10);
    return 0;
}

void lowercase(char l[],int n)
{
    int i;
    printf("Enter String ");
    gets(l);
    for(i=0;l[i];i++)
    {
        if(l[i]>='A' && l[i]<='Z')
        {
            l[i]+=32;
        }
        printf("%c",l[i]);
    }
}
