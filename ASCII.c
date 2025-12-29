/***************************************************
* Name       : praveen kumar B
* Description: character type using ASCII
* Date       : 2025-12-29
***************************************************/

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
   switch(ch)
    {
        case'A'...'Z':
                     printf("The given chacter ascii value is :%d\n",ch);
                      printf("The given chacter ascii value is :%c",ch);
                     break;
        case'a'...'z':
                     printf("The given charcter ascii value is:%d\n",ch);
                      printf("The given chacter ascii value is :%c",ch);
                     break;
        case'0'...'9':
                     printf("The given character ascii value is %d\n",ch);
                      printf("The given chacter ascii value is :%c",ch);
                     break;
        default:
                  printf("It is non alpha numeric character");
    }
    return 0;
}
