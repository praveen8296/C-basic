//write a program for Electricity bill
#include<stdio.h>
int main()
{
   int units;
   float slab1=1.50,slab2=2.50,slab3=4.00,slab4=6.00,price;
   printf("enter the units:");
   scanf("%d",&units);
   if(units<=50)
   {
       price=units*slab1;
       printf("electricity price=%.1f",price);
    }
    else if(units>=51 && units<=100)
     {
         price=units*slab2;
         printf("electricity price=%.1f",price);
      }
      else if(units>=101 && units<=200)
         {
             price=units*slab3;
             printf("electricity price=%.1f",price);
          }
          else
          {
              price=units*slab4;
              printf("electricity price=%.1f",price);
            }
            return 0;
}
