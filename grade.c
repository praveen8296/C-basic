/***************************************************
 *  * Name       : praveen kumar B
 *   * Description: 
 *    * Date       : 2025-12-28
 *     ***************************************************/

#include<stdio.h>
int main()
{
    int per;
    printf("enter the percentage:");
    scanf("%d",&per);
    if(per<100)
    {
     if(per>90 && per<100)
     {
         printf("The grade is A:%d",per);
      }
      else if(per>70 && per<91)
      {
          printf("The grade is B:%d",per);
       }
       else if(per>50 && per<71)
       {
           printf("The grade is c:%d",per);
         }
         else
         {
             printf("The grade is d:%f",per);
         }
    }
         else
         {
             printf("the intger value is greater than 100");
            }
            return 0;
    }

