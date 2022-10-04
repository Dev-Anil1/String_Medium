#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20];
    frequency(ch,20);
    return 0;
}

void frequency(char f[], int n)
{
    int i;
    printf("Enter string ");
    gets(f);
    char a[150]={0};
    for(i=0;f[i];i++)
    {
        a[f[i]]++;
    }

    for(i=0;i<150;i++)
    {
        if(a[i]!=0)
            printf("%c==>%d\n",i,a[i]);
    }
}
