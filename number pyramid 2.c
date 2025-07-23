#include<stdio.h>

int main()
{
    int i,j,k,a; int x=0;
    printf("Enter your value : ");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        for(j=0;j<a-i;j++)
       {
           printf(" ");
       }
            for(k=0;k<2*i+1;k++)
            {
                printf("%d",x);
                x++;
                }

       printf("\n");

        }





}
