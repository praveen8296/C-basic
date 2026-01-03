/***************************************************
 * Name       : praveen kumar B
 * Description:Write a program to check whether the k-th bit of a number                is SET or NOT. 
 * Date       : 2026-01-02
 ****************************************************/
#include<stdio.h>
 int main()
 {
     int number,bit;
     printf("enter the number:");
     scanf("%d",&number);
     printf("enter the bit:");
     scanf("%d",&bit);
     if( number & 1<<bit)
       {
           printf("The number bit is set bit:%d",bit);
        }
        else
        {
            printf("The number bit is not a set bit:%d",bit);
         }
         return 0;
 }


