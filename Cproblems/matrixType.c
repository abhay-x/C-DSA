// MATRIX TYPES
// MATRIX TYPES

// Write a C program to find the type of square matrix using functions:

// a) Fn. findSymmetric which returns 1 if the matrix is symmetric and 0 if the matrix is not symmetric.

// b) Fn. findIdentity which returns 1 if the matrix is an identity matrix and 0 if the matrix is not an identity matrix.

// c) Fn. findMagic which returns 1 if the matrix is a magic square and 0 if the matrix is not a magic square. A Magic Square is a square matrix in which the sum of the elements in each row and column is the same.

// d) Fn. findUpperTriangular which returns 1 if the matrix is an upper diagonal matrix and 0 if it is not. An upper triangular matrix is one in which all the elements below the diagonal are equal to 0.

// e) Fn. findLowerTriangular which returns 1 if the matrix is a lower diagonal matrix and 0 if it is not.

// A lower triangular matrix is one in which all the elements above the diagonal are equal to 0.

// f) Fn. findEvenTrace which returns 1 if the sum of the diagonal (L->R) elements of the matrix is even and 0 otherwise.

// g) Fn. findNonzero which returns 1 if the all the elements in the matrix are nonzero and 0 otherwise.

// h) Fn. findSpecial which returns 1 if the integer n (n corresponds to the number of rows / columns of the matrix) is present in the matrix and 0 otherwise.

// i) Fn. findSpecialTrace which returns 1 if the sum of the L-> R diagonal elements of the matrix is the same as the sum of the R->L diagonal elements of the matrix and 0 otherwise.

// j) Fn. findLucky which returns 1 if all the elements in the matrix are divisible by the number of rows/columns in the matrix and 0 otherwise.

// Use dynamic allocation of memory. (i.e use malloc()). Use functions for reading and displaying a matrix. The function template can be downloaded from the functions editor.

// Note:
// Refer to the problem requirements.

// Input Format:

// Input consists of (n*n)+1 integers.
// The first integer corresponds to n, the number of rows/columns in the matrix.
// The next 'n' integers correspond to the elements in the first row of the matrix.
// The next 'n' integers correspond to the elements in the second row of the matrix and so on.

// Output Format:

// Refer Sample Output for formatting details.

// Sample Input:

// 3

// 1

// 2

// 3

// 2

// 4

// 5

// 3

// 5

// 6

// Sample Output:

// 1 2 3

// 2 4 5

// 3 5 6

// Matrix is Symmetric

// Matrix is not Identity

// Matrix is not Magic

// Matrix is not UpperTriangular

// Matrix is not LowerTriangular

// Matrix is not EvenTrace

// Matrix is NonZero

// Matrix is Special

// Matrix is not SpecialTrace

// Matrix is not Lucky

// Problem Requirements:

// int ** readMatrix(int rows, int cols)
// void displayMatrix(int** a,int rows, int cols)
// int findSymmetric(int ** a, int n)
// int findIdentity(int ** a, int n)
// int findMagic(int ** a, int n)
// int findUpperTriangular(int ** a, int n)
// int findLowerTriangular(int ** a, int n)
// int findEvenTrace(int ** a, int n)
// int findNonZero(int ** a, int n)
// int findSpecial(int ** a, int n)
// int findSpecialTrace(int ** a, int n)
// int findLucky(int ** a, int n)

// Function Definitions:

// int ** readMatrix (int rows, int cols)
// void displayMatrix (int** a,int rows, int cols)
// int findSymmetric (int ** a, int n)
// int findIdentity (int ** a, int n)
// int findMagic (int ** a, int n)
// int findUpperTriangular (int ** a, int n)
// int findLowerTriangular (int ** a, int n)
// int findEvenTrace (int ** a, int n)
// int findNonZero (int ** a, int n)
// int findSpecial (int ** a, int n)
// int findSpecialTrace (int ** a, int n)
// int findLucky (int ** a, int n)


#include<stdio.h>
#include<stdlib.h>
int **readMatrix(int rows,int cols);
void displayMatrix(int** a,int rows,int cols);
int findSymmetric(int** a,int n);
int findIdentity(int** a,int n);
int findMagic(int** a,int n);
int findUpperTriangular(int** a,int n);
int findLowerTriangular(int** a,int n);
int findEvenTrace(int** a,int n);
int findNonZero(int** a,int n);
int findSpecial(int** a,int n);
int findSpecialTrace(int** a,int n);
int findLucky(int** a,int n);
int main()
{
    int **rm, k;
    scanf("%d",&k);
    rm=readMatrix(k,k);
    displayMatrix(rm,k,k);
    
    if(findSymmetric(rm,k)==1)
    printf("\nMatrix is Symmetric\n");
    else
    printf("\nMatrix is not Symmetric\n");
    
    if(findIdentity(rm,k)==1)
    printf("Matrix is Identity\n");
    else
    printf("Matrix is not Identity\n");
    
    if(findMagic(rm,k)==1)
    printf("Matrix is Magic\n");
    else
    printf("Matrix is not Magic\n");
    
    if(findUpperTriangular(rm,k)==1)
    printf("Matrix is UpperTriangular\n");
    else
    printf("Matrix is not UpperTriangular\n");
    
    if(findLowerTriangular(rm,k)==1)
    printf("matrix is LowerTriangular\n");
    else
    printf("Matrix is not LowerTriangular\n");

	if(findEvenTrace(rm,k)==1)
	printf("Matrix is EvenTrace\n");
	else
	printf("Matrix is not EvenTrace\n");
	
	if(findNonZero(rm,k)==1)
	printf("Matrix is NonZero\n");
	else
	printf("Matrix is not NonZero\n");
	
	if(findSpecial(rm,k)==1)
	printf("Matrix is Special\n");
	else
	printf("Matrix is not Special\n");
	
	if(findSpecialTrace(rm, k)==1)
	printf("Matrix is SpecialTrace\n");
	else
    printf("Matrix is not SpecialTrace\n");
		
	if(findLucky(rm, k)==1)
    printf("Matrix is Lucky\n");
	else
    printf("Matrix is not Lucky\n");
	
	for(int i=0;i<k;i++)
	{
	    free(*(rm+i));
	}
	free(rm);
	return 0;
}
int **readMatrix(int rows,int cols){
    int **arr,i,j;
    arr=(int**)malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++){
        *(arr+i)=(int*)malloc(cols*sizeof(int));
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",*(arr+i)+j);
        }
    }
    return arr;
}
void displayMatrix(int** a,int rows,int cols){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
}
int findSymmetric(int** a,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(*(*(a+i)+j)!=*(*(a+j)+i))
            return 0;
}
}
return 1;
}
int findIdentity(int** a,int n){
      int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j && *(*(a+i)+j)!=1)
            return 0;
            else if(i!=j && *(*(a+i)+j)!=0)
            return 0;
        }
    }
    return 1;
}
int findMagic(int** a,int n){
    int i,j,s=0,p=0;
    for(i=0,j=0;j<n;j++){
        s=s+*(*(a+i)+j);
    }
    p=s;
    for(i=1;i<n;i++){
        s=0;
        for(j=0;j<n;j++){
            s=s+*(*(a+i)+j);
        }
        if(p!=s)
        return 0;
    }
    for(j=0;j<n;j++){
        s=0;
        for(i=0;i<n;i++){
            s=s+*(*(a+i)+j);
        }
        if(p!=s)
        return 0;
    }
    return 1;
}
int findUpperTriangular(int **a,int n)
{
   int i,j;
   for(i=1;i<n;i++) //i=0
   {
        for(j=0;j<i;j++)
        {
            if(*(*(a+i)+j)!=0)
            {
                return 0;
            }
        }
   }
   return 1;
}
int findLowerTriangular(int **a, int n)
{
    int i,j;
    for(i=n-2; i>=0;i--)
    {
        for(j=n-1;j>i;j--)
        {
            if(*(*(a+i)+j)!=0) //oo
            {
                return 0;
            }
        }
    }
    return 1;
}
int findEvenTrace(int **a, int n)
{
    int i=0,j=0,s=0;
    while(i<n||j<n)
    {
        s=s+*(*(a+i)+j);
        i++;
        j++;
    }
    if(s%2!=0)
    return 0;
    return 1;
}
int findNonZero(int **a, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(*(a+i)+j)==0)
            return 0;
        }
    }
    return 1;
}
int findSpecial(int **a, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(*(a+i)+j)==n)
            return 1;
        }
    }
    return 0;
}
int findSpecialTrace(int **a, int n)
{
    int i=0,j=0,s=0,r=0;
    while(i<n||j<n)
    {
        s=s+*(*(a+i)+j);
        i++;
        j++;
    }
    j--;
    i=0;
    while(i<n||j>=0)
    {
        r=r+*(*(a+i)+j);
        i++;
        j--;
    }
    if(s==r)
    return 1;
    return 0;
}
int findLucky(int **a, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(*(a+i)+j)%n!=0)
            return 0;
        }
    }
    return 1;
}