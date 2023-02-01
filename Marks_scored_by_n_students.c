#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
float a[10][10],sum,perc;
int i,j,k,n;
char grade[10];
clrscr();
printf("\033[1;34m");
printf("Enter The no of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=0;
printf("\033[1;35m");
printf("Enter marks of Student %d\n",i+1);
for(j=0;j<3;j++)
{
scanf("%f",&a[i][j]);
sum+=a[i][j];
}
perc=(sum/300)*100;
a[i][j]=perc;
if(perc>=80)
grade[i]='A';
else if(perc>=70 && perc<80)
grade[i]='B';
else if(perc>=60 && perc<70)
grade[i]='C';
else if(perc>=50 && perc<60)
grade[i]='D';
else
grade[i]='E';
}
system("cls");
printf("\033[1;31m");
printf("Sl.n\tMarks\tAverage\t           Grade\n");
printf("\033[1;33m");
printf("===============================================================\n");
printf("\033[1;36m");
for(i=0;i<n;i++)
{
printf("|%d|",i+1);
for(j=0;j<4;j++)
printf("%6.2f|",a[i][j]);
printf("%6c|",grade[i]);
printf("\n");
}
printf("\033[1;33m");
printf("===============================================================\n");
getch();
}

