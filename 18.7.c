#include<stdio.h>
#include<string.h>

void pelindrome(char s[],int n);
int main()
{
    char str[20];
    pelindrome(str,20);
    return 0;
}

void pelindrome(char s[],int n)
{
    int i=0,j=strlen(s)-1;
    printf("Enter string to check pelindrome ");
    gets(s);
    for(i=0;i<=j;i++,j--)
    {
        if(s[i] != s[j])
            break;

    }

    if(i>=j)
        printf("pelindrome");
    else
        printf("not pelindrome");
}

