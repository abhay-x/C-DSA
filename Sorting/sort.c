#include<stdio.h>
 int main()
{
    int a[15],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i]>a[j])
        a[i]=a[j];
    }
    printf("%d is the minimum element in the array",a[0]);
}