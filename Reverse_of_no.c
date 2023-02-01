#include<stdio.h>
#include<conio.h>
void main()
{
int k,num,rev=0,rem,sum=0;
clrscr();
printf("Enter the Number ");
scanf("%d",&num);
k=num;
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
sum+=rem;
num=num/10;
}
printf("Reverse of a no is %d\nSum of a no is %d\n",rev,sum);
if(k==rev)
printf("It is a palindome no\n");
getch();
}

