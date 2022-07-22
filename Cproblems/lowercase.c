#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    int i;
    printf("Enter the input string\n");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65&&a[i]<=90)
        a[i]=a[i]+32;
        else
        a[i]=a[i]+0;
    }
    printf("The output string is %s",a);
    return 0;
}