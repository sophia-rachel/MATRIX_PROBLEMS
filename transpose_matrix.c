//Program to print the transpose of matrix
//input:
//2 3
//1 2 3
//4 5 6
//output:
//1 4
//2 5
//3 6
#include <stdio.h>
int r,c,i,j;
void printTranspose(int mat[r][c])
{
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }    
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
    printTranspose(mat);
    return 0;
}