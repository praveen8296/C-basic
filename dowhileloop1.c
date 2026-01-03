/***************************************************
* Name       : praveen kumar B
* Description: write a program to print power to two series using  do while loop
* Date       : 2025-12-30
***************************************************/

#include<stdio.h>
int main()
{
    int i=1,number,power,value=1;               //variable decleartion
    printf("enter the number and power:" );
    scanf("%d%d",&number,&power);
    if(number>0)                            //number should be poisitive
     {
         do     //loop runs less than power
         {

              
             printf(" %d",value);          //print the inital value
             value=number*value;          //very time loop runs value is updated and multiple with number
             i++;
          }while(i<=power);     //do while loop only have semicolon or termination 
     }
          else
            {
                printf("integer is negative number");
            }
     
     return 0;
}
