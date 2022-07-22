// A matrix is said to be row dominant if the sum of the elements along any row in the matrix is greater than the sum of the elements along every column in the matrix. Write a program to determine whether the given matrix is row dominant or not.

#include<stdio.h>
#include<stdlib.h>
int **readMatrix(int , int);
void displayMatrix(int **, int, int);
int findRowDominantMatrix(int **, int, int);
int main()
{
    int m,n,**rm;
    scanf("%d %d",&m,&n);
    
    rm=readMatrix(m, n);
    displayMatrix(rm, m, n);
    
    if(findRowDominantMatrix(rm, m, n)==1)
           printf("\nRow Dominant");
    else
           printf("\nNot Row Dominant");
	
	return 0;
}
int **readMatrix(int m, int n){
    int i, j, **arr;
    
    arr =(int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++) {
        *(arr+i) = (int*)malloc(sizeof(int)*n);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",*(arr+i)+j);
        }
    }
    return arr;
}
void displayMatrix(int **a,int m, int n){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
}
int findRowDominantMatrix(int **a, int m, int n){
    int i, j, s, r, c;
    
    for(i=0;i<m;i++) {
        c=0;
        r=0;
        
    for(j=0;j<n;j++) {
        r=r+ *(*(a+i)+j);
    }    
    for(int k=0;k<n;k++) {
            s=0;
            for(int l=0; l<m;l++) {
                s=s+*(*(a+l)+k);
            }
            if(r>s)
               c++;
        else
              break;
    }
    if(c==n)
     return 1;
    }
    return 0;
}