/***************************************************
* Name       : praveen kumar B
* Description: write a program for relational operator 
* Date       : 2026-01-02
***************************************************/
//relational operator=relational operator compare to two operands and return1 if condition is true otherwise 0
//(<,>,<=,>=,==,!=) output o or 1
#include<stdio.h>
int main()
{
    int a=5,b=6;
    printf("relational operator:%d\n",a<b);//1
    printf("relational operator:%d\n",a>b);//0
    printf("relational operator:%d\n",a<=b);//1
    printf("relational operator:%d\n",a>=b);//0
    printf("relational operator:%d\n",a==b);//0
    printf("relational operator:%d\n",a!=b);//1
    printf("relational operator:%d\n",a+5 > b-5);//0
     printf("relational operator:%d\n",'A' < 'a');//0
   
    return 0;
}

