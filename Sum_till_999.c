#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0;
clrscr();
printf("Enter the no. ");
scanf("%d",&num);
while(num!=999)
{
if(num<0)
{
scanf("%d",&num);
continue;
}
else
{
sum+=num;
scanf("%d",&num);
}
}
printf("Sum of positive no. are = %d ",sum);
getch();
}

