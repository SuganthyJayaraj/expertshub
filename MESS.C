#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=500,tea=50,vada=200;
   int i,n,aidly,adosa,atea,avada;
   int b_idly,b_dosa,b_tea,b_vada;
   char name;
   clrscr();
   printf("Enter no of person:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   printf("Enter the name:");
   scanf("%s",&name);
   printf("Enter the food consumed:\n");
   printf("Idli:");
   scanf("%d",&aidly);
   printf("Dosa:");
   scanf("%d",&adosa);
   printf("Tea:");
   scanf("%d",&atea);
   printf("Vada:");
   scanf("%d",&avada);
   b_idly=idly-aidly;
   b_dosa=dosa-adosa;
   b_tea=tea-atea;
   b_vada=vada-avada;
   printf("Name:%c consumed \n Idli:%d \n Dosa:%d \n Tea:%d \n Vada:%d \n",name,aidly,adosa,atea,avada);
   printf("Balance food \n Idli:%d \n Dosa:%d \n Tea:%d \n Vada:%d \n",b_idly,b_dosa,b_tea,b_vada);
   }
   getch();
}



