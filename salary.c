/***************************************************
 * Name       : praveen kumar B
 * Description:Write a program calculate gross salary and net salary of an                employee based on basic salary considering HRA DA and PF 
 * Date       : 2025-12-29
 ***************************************************/
 //HRA=house rent allowance
 //DA=Dearness allowance
 //PF=provident fund
 
#include<stdio.h>
 int main()
 {
     int salary;
     float HRA,DR,PF,gross,net;
     printf("enter the salary:\n");
     scanf("%d",&salary);
     if(salary<=10000)
      {
          HRA=salary*20/100;
          DR=salary*40/100;
          PF=salary*12/100;
          gross=salary+HRA+DR;
          net=gross-PF;

          printf("HRA:%f\n",HRA);
          printf("DR:%f\n",DR);
          printf("PF:%f\n",PF);
          printf("gross:%f\n",gross);
          printf("net:%f\n",net);
      }
      else if(salary>10000)
      {
          
           HRA=salary*25/100;
          DR=salary*50/100;
          PF=salary*12/100;
          gross=salary+HRA+DR;
           net=gross-PF;
 
            printf("HRA:%f\n",HRA);
            printf("DR:%f\n",DR);
            printf("PF:%f\n",PF);
            printf("gross:%f\n",gross);
            printf("net:%f\n",net);
        }
        else
        {
            printf("any negative value:\n");
         }
         return 0;
 }
          







