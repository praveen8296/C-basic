/***************************************************
 *  * Name       : praveen kumar B
 *   * Description: 
 *    * Date       : 2025-12-28
 *     ***************************************************/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <='Z')
    {
        printf("The character is upper case:%c",ch);
       
     }
     else if(ch >='a' && ch <= 'z')
      {
          printf("The character is lower case:%c",ch);
       }
       else if(ch >= '0' && ch <= '9')
          {
              printf("The character is number:%c",ch);
         }
         else
         {
             printf("The character is non alphanumeric character:%c",ch);
         }
         return 0;
}
