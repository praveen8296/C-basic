/***************************************************
 * Name       : praveen kumar B
 * Description: write a program to check whether a number is palinddrome                or not
 * Date       : 2025-12-30
***************************************************/

//palindrome is a number word or sequence that remains unchanged when reversed
//example 121,madam,level
#include<stdio.h>
int main()
{
    int i,num,orignal,digit,reverse=0;
    printf("enter the number:");
    scanf("%d",&num);
    orignal=num;
    if(num>0)
    {
        while(num>0)
        {
            digit=num%10;              //get last digit
            reverse=reverse*10+digit;   //build reverse
            num=num/10;                 //remove last digit
            
         }
    if(orignal==reverse)
       {
           printf("it is pailndrome");
       }
       else
       {
           printf("it is not apailndrome");
        }
       }
       else
       {
           printf("please enter the poistive number:");
       }
       return 0;
}


