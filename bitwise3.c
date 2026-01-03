/***************************************************
 * Name       : praveen kumar B
 * Description:Write a program to set the 3rd bit of a number using bitw               ise operator 
 * Date       : 2026-01-02
****************************************************/
#include<stdio.h>
int main()
{
    int number,bit,reslut=0;
    printf("enter the number:");
    scanf("%d",&number);
    printf("enter the bit:");
    scanf("%d",&bit);
     if(reslut=number | 1<<bit)
      {
          printf("The bit is set:%d",bit);
          printf("the number is:%d",reslut);
       }
       else
       {
           printf("the bit is set:%d",bit);
           printf("the number is :%d",reslut);
       }
       return 0;
}

