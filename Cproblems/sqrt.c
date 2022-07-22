#include <stdio.h>
float squareroot(int);
int main()
{
    int a;
    float c;
    printf("Enter a number\n");
    scanf("%d",&a);
    c=squareroot(a);
    printf("The square root of %d is %.2f",a,c);
    return 0;
}
float squareroot(int x)
{
    float b,c;
    b=(float)x/2;
    c=0;
    while(b!=c)
    {
        c=b;
        b=(float)(x/c+c)/2;
    }
    return b;
}