#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,k=0;
clrscr();
printf("Enter a number ");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
k=1;
}
}
if(k==0)
printf("No is  a prime ");
else
printf("Not prime");
getch();
}








































