/***************************************************
* Name       : praveen kumar B
* Description: left triangle pattern
* Date       : 2025-12-31
***************************************************/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number");
    scanf(" %d",&n);
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=i;j++)
     {
        printf(" *");
     }
     printf("\n");
    }
     return 0;
}
    

