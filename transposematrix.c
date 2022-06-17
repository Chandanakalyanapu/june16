#include<stdio.h>
void main()
{
        int m,n,i,j,matrix[10][10];
        printf("enter the size of matrix:");
        scanf("%d%d",&m,&n);
        printf("enter elements into matrix\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&matrix[i][j]);
                }
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                  printf("%d ",matrix[j][i]);
                }
                  printf("\n");

        }
}
