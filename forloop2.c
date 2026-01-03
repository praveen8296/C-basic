/***************************************************
 * Name       : praveen kumar B
 * Description: write a program to multiply 2 nos without multiplication operator using for loop
 * Date       : 2025-12-30
 ****************************************************/
#include<stdio.h>
 int main()
 {
     int num1,num2,result=0;
     printf("enter the two numbers:");
     scanf("%d%d",&num1,&num2);       //num1=4 ,num2=2
     for(int i=1;i<=num2;i++)       //i=1  result=0+4=4
                                    //i=2   result=4+4=8 loop breaks prints output
     {
        result=result+num1;
        
      }
      printf("%d",result);        //8
      return 0;
 }

