/***************************************************
* Name       : praveen kumar B
* Description: write a program to print power to two series using for loop
* Date       : 2025-12-30
***************************************************/

#include<stdio.h>
int main()
{
    int i=1,number,value=1;
    printf("enter the number:");
    scanf("%d",&number);
    if(number>0)
     {
         while(i<=number)
         {

              
             printf(" %d",value);
             value=value*2;
             i++;
          }
     }
          else
            {
                printf("integer is negative number");
            }
     
     return 0;
}
