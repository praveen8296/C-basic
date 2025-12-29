/***************************************************
 *  * Name       : praveen kumar B
 *   * Description: 
 *    * Date       : 2025-12-28
 *     ***************************************************/

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("The greatest number is:%d",num1);
     }
     else if(num2>num1 && num2>num3)
        {
            printf("The greatest number is:%d",num2);
           }
       else 
       {
           printf("The greatest number is:%d",num3);
       }
       return 0;
}
