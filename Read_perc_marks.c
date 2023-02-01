#include<stdio.h>
#include<conio.h>
void main()
{
float m1,m2,m3,total;
float perc;
char name[35],auid[15];
clrscr();
printf("Enter your AUID\n");
scanf("%s",auid);
fflush(stdin);
printf("Enter your Name\n");
scanf("%s",name);
printf("Enter Marks 1 Marks 2 and Marks 3\n");
scanf("%f%f%f",&m1,&m2,&m3);
total=m1+m2+m3;
perc=(total/300)*100;
printf("Auid : %s\n",auid);
printf("Name : %s\n",name);
printf("Total : %.2f\n",total);
printf("Percentage : %.2f\n",perc);


getch();
}

