/***************************************************
* Name       : praveen kumar B
* Description: Write a program to count number of 1s (set bits) in a num               ber
* Date       : 2026-01-02
****************************************************/
#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while (n)
  {
      n=n&(n-1);
      count++;
  }
  printf("set bits=%d",count);
  return 0;
}

