//Program to print the sum of elements of the matrix
//input:
//2 3
//1 2 3 
//4 5 6 
//output:
//21 
#include <stdio.h>
int r,c,i,j;
void printSum(int mat[r][c])
{   
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=mat[i][j];
        }    
    }   
    printf("%d",sum);
}
int main()
{
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }    
    }
    printSum(mat);
    return 0;
}