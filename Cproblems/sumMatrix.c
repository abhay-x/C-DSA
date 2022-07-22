#include<stdio.h>
#include<stdlib.h>
int** readmatrix(int,int);
void Matrixsum(int **,int,int);
int main()
{
	int r,c,i,**rm;
	printf("Enter the number of rows in the matrix\n");
	scanf("%d",&r);
	printf("Enter the number of columns in the matrix\n");
	scanf("%d",&c);
	rm=readmatrix(r,c);
	Matrixsum(rm,r,c);
	for(i=0;i<r;i++)
	    free(*(rm+1));
	free(rm);
	return 0;
}
	
int** readmatrix(int r,int c)	
{
	int i,j,**arr;
	arr=(int**)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
	    *(arr+i)=(int*)malloc(c*sizeof(int));
	
	printf("Enter the elements in the matrix\n");
	for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    {
	        scanf("%d",*(arr+i)+j);
	    }
	return arr;
}

void Matrixsum(int **a,int r,int c)
{
    int sum=0,i,j;
	for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    {
	        sum=sum+*(*(a+i)+j);
	    }
	printf("The sum of the elements in the matrix is %d\n",sum);   
}