#include<stdio.h>
#include<conio.h>
void main()
{
   int poori,ragul,sanjay,kamali,r_poori,s_poori,k_poori;
   clrscr();
   printf("Enter total poori:");
   scanf("%d",&poori);
   printf("Enter ragul's poori:");
   scanf("%d",&ragul);
   printf("Enter sanjay's poori:");
   scanf("%d",&sanjay);
   printf("Enter kamali's poori:");
   scanf("%d",&kamali);
   r_poori=poori*ragul/100;
   s_poori=poori*sanjay/100;
   poori=poori-r_poori-s_poori;
   printf("r and s's poori:%d\n",poori);
   k_poori=poori*kamali/100;
   poori=poori-k_poori;
   printf("Balance poori:%d",poori);
   getch();
}





