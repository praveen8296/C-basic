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
 switch(ch)
{
    case 'A'...'Z':
                 printf("The given character is upper case:%c",ch);
                 break;
    case 'a'...'z':
                  printf("The given character is lower case:%c",ch);
                  break;
   case '0'...'9':
                  printf("The given character is number:%c",ch);
                  break;
       default:
             printf("the given character is non alphanumeric:");
    }
    return 0;
}

