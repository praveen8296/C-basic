/***************************************************
* Name       : praveen kumar B
* Description: write a program to print power to two series using do while loop
* Date       : 2025-12-30
***************************************************/

#include<stdio.h>
int main()
{
    int number,i=1,value=1;
    printf("enter the number:");
    scanf("%d",&number);
    if(number>0)
     {
         do
         {
            printf(" %d",value);
             value=value*2;
             i++;
             
          }while(i<=number);
     }
          else
            {
                printf("integer is negative number");
            }
     
     return 0;
}
