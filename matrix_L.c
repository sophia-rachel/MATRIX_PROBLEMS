//program to print matrix row and column in inverted L fashion
//input:
//3 3
//1 2 3
//4 5 6
//7 8 9
//output:
//1 2 3
//4 7
//5 6
//8
//9
#include <stdio.h>

int main()
{
    int r,c,i,j,k;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=i;j<r;j++)
            printf("%d ",a[i][j]);
        printf("\n");
        for(k=i+1;k<c;k++)
            printf("%d ",a[k][i]);
        printf("\n");
    }

    return 0;
}
