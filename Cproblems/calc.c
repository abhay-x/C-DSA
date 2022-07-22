#include <stdio.h>
#include <math.h>
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
float division(int,int);
int modulo(int,int);
float average(int,int);
int power(int,int);
int main()
{
    int a,b,c,p;
    float q;
    scanf("%d%d%d",&a,&b,&c);
    switch(c)
    {
        case 1:p=addition(a,b);
               printf("%d",p);
               break;
        case 2:p=subtraction(a,b);
               printf("%d",p);
               break;
        case 3:p=multiplication(a,b);
               printf("%d",p);
               break;
        case 4:q=division(a,b);
               printf("%.2f",q);
               break;
        case 5:p=modulo(a,b);
               printf("%d",p);
               break;
        case 6:q=average(a,b);
               printf("%.2f",q);
               break;
        case 7:p=power(a,b);
               printf("%d",p);
               break;
    }
    return 0;
}
int addition(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int subtraction(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int multiplication(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
float division(int a,int b)
{
    float c;
    c=(float)(a)/(float)(b);
    return c;
}
int modulo(int a,int b)
{
    int c;
    c=a%b;
    return c;
}
float average(int a,int b)
{
    float c;
    c=(float)(a+b)/2;
    return c;
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    return c;
}