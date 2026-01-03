/***************************************************
* Name       : praveen kumar B
* Description: write a program to print line pattern
* Date       : 2025-12-31
***************************************************/

#include<stdio.h>
int main()
{
    int i,j,n ,m;
  printf("enter the n and m :");
  scanf("%d%d",&m,&n);
  for(int i=0;i<n;i++)
   {
   for(int j=0;j<m;j++)
     {
         printf("*");
      }
   }
   return 0;
}

