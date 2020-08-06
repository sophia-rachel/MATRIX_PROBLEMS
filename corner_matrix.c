//Program to print sum of corner elements in a matrix.
//input
//3
//1 2 3
//4 5 6
//7 8 9
//output
//20
#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("%d",a[0][0]+a[0][n-1]+a[n-1][0]+a[n-1][n-1]);
    return 0;
}
