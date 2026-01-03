/***************************************************
* Name       : praveen kumar B
* Description: write a program to print power to two series using for loop
* Date       : 2025-12-30
***************************************************/

#include<stdio.h>
int main()
{
    int number,value=1;
    printf("enter the number:");
    scanf("%d",&number);
    if(number>0)
     {
         for(int i=1;i<=number;i++)
         {

              
             printf(" %d",value);
             value=value*2;
             
          }
     }
          else
            {
                printf("integer is negative number");
            }
     
     return 0;
}
