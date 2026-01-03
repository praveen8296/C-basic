/***************************************************
 * Name       : praveen kumar B
 * Description: write a programming on overflow and underflow
 * Date       : 2026-01-02
***************************************************/

#include<stdio.h>
int main()
{
    unsigned char a=255;
    a=a-1;
    printf("%d",a);  //254 underflow
    return 0;
}
