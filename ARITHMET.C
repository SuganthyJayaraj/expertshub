#include<stdio.h>
#include<conio.h>

void main()
{
   int no1,no2,out1,out2,out3,out4,out5;
   clrscr();
   printf("Enter the input 1:");
   scanf("%d",&no1);
   printf("Enter the input 2:");
   scanf("%d",&no2);
   out1=no1+no2;
   printf("\nSum of values are %d ",out1);
   out2=no1-no2;
   printf("\nSub of values are %d ",out2);
   out3=no1*no2;
   printf("\nProduct of values are %d ",out3);
   out4=no1/no2;
   printf("\nQuotient of values are %d ",out4);
   out5=no1%no2;
   printf("\nRemainder of values are %d ",out5);
   getch();
}