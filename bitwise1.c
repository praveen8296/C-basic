/***************************************************
 * Name       : praveen kumar B
 * Description: write a c program to check whether number is even or odd                using bitwise operator
 * Date       : 2026-01-02
 ****************************************************/
#include<stdio.h>
 int main()
 {
     int num;
     printf("enter the number:");
     scanf("%d",&num);
     if(num & 1)
      {
          printf("number is odd number:%d",num);
       }
       else
       {
           printf("number is even number:%d",num);
       }
       return 0;
 }

