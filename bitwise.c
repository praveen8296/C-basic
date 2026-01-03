/***************************************************
 * Name       : praveen kumar B
 * Description: bitwise operator
 * Date       : 2026-01-02
 ****************************************************/
//Bitwise operators manipulate individual bits of data and are widely used in embedded systems for efficient hardware control.
//bitwise operator:(&,|,^,<<,<<)
#include<stdio.h>
int main()
{
    int a=3,b=12;
      printf("%d\n",a&b);  //8
      printf("%d\n",a|b); //14
      printf("%d\n",a^b);//6
      printf("%d\n",~a);//5
      printf("%d\n",a>>2);//0
      printf("%d\n",a<<2);//12
     return 0;
}
