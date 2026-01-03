/***************************************************
 * Name       : praveen kumar B
 * Description: write a c program for sizeof operator.c
 * Date       : 2026-01-02
 ***************************************************/
//sizeof() is unary operator used find the size in bytes
//syntax sizeof(datatypes)
//sizeof depend on the value
//%zu is format specifier
#include<stdio.h>
int main()
{
    int arr[10];
    printf("%ld",sizeof(arr)); //10*4=40
    return 0;
}

