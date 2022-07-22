#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("Enter a Year :%d", &a);
    b = a % 4;
    c = a % 100;
    d = a % 400;
    if (b == 0 && !c == 0)
    {
        printf("%d is a leap year", a);
    }
    else if (b == 0 && c == 0 && d == 0)
    {
        printf("%d is a leap year", a);
    }
    else
    {
        printf("%d is not a leap year", a);
    }
}