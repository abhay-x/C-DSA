#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    //nested ternary operator
    (a>b)? ((a>c)?printf("%d is the greatest number",a):printf("%d is the greatest number",c)) : ((b>c)?printf("%d is the greatest number",b):printf("%d is the greatest number",c));
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d",&a);
//     b=a%7;
//     c=a%3;
//     (b==0)&&(c==0)?printf("%d is divisible by both 7 and 3",a):printf("%d is not divisible by both 7 and 3",a);
// }