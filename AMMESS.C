#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=500,tea=50,vada=200;
   int aidly,adosa,atea,avada;
   int midly,mdosa,mtea,mvada;

   clrscr();
   printf("Enter the food consumed:\n");
   printf("Idli:");
   scanf("%d",&aidly);
   printf("Dosa:");
   scanf("%d",&adosa);
   printf("Tea:");
   scanf("%d",&atea);
   printf("Vada:");
   scanf("%d",&avada);
   printf("Enter the food consumed:\n");
   printf("Idli:");
   scanf("%d",&midly);
   printf("Dosa:");
   scanf("%d",&mdosa);
   printf("Tea:");
   scanf("%d",&mtea);
   printf("Vada:");
   scanf("%d",&mvada);
   idly=idly-aidly;
   idly=idly-midly;
   dosa=dosa-adosa;
   dosa=dosa-mdosa;
   tea=tea-atea;
   tea=tea-mtea;
   vada=vada-avada;
   vada=vada-mvada;
   printf("Balance food \n Idli:%d \n Dosa:%d \n Tea:%d \n Vada:%d \n",idly,dosa,tea,vada);
   getch();
}



