/***************************************************
 *  * Name       : praveen kumar B
 *   * Description: 
 *    * Date       : 2025-12-29
 *     ***************************************************/

#include<stdio.h>
int main()
{
    int num1,num2;
    char expr;
    printf("enter the num1 and num2\n");
    scanf("%d%c%d",&num1,&expr,&num2);
    //printf("enter the expr\n");
    //scanf("%c",&expr);
    switch(expr)
   {
       case '+':
               printf(" %d",num1+num2);
               break;
       case '-':
              printf("%d",num1-num2);
              break;
       case '*':
              printf("%d",num1*num2);
              break;
        case '%':
              printf("%d",num1/num2);
              break;
       default:
               printf("error");
     }
     return 0;
}
