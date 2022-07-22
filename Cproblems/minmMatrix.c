#include<stdio.h>
#include<stdlib.h>
int** ReadMatrix(int,int);
void MinEl(int**,int,int);
int main()
{
    int r,c,**rm;
    scanf("%d%d",&r,&c);
    rm=ReadMatrix(r,c);
    MinEl(rm,r,c);
	return 0;
}
int** ReadMatrix(int r,int c)
{
    int i,j,**arr;
    arr=(int**)malloc(sizeof(int*)*r);
    for(i=0;i<r;i++)
    {
        *(arr+i)=(int*)malloc(sizeof(int)*c);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",*(arr+i)+j);
        }
    }
    return arr;
}
void MinEl(int **a,int m,int n)
{
    int i,j,min,c;
    min=*(*(a+0)+0);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(min>*(*(a+i)+j))
            {
                c=*(*(a+i)+j);
                *(*(a+i)+j)=min;
                min=c;
            }
        }
    }
    printf("The minimum element is %d",min);
}