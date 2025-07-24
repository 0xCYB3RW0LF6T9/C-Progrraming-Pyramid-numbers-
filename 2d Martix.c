#include<stdio.h>
int main()
{
    int i,j,row,col;
    int a[100][100];
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
    {
        printf("Enter element for [%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<row;i++)
    {

        for(j=0;j<col;j++)
        {
        printf(" %d ",a[i][j]);
        }
    printf("\n");
    }

}
