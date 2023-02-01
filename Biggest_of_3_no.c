//program to read three no and find the biggest of three.
#include<stdio.h>
#include<conio.h>
void main()
{
int big,a,b,c;
clrscr();
printf("Enter the value of a b and c \n");
scanf("%d%d%d",&a,&b,&c);
big=a;
if(b>big) big=b;
if(c>big) big=c;
printf("Greatest among these three are %d ",big);
getch();
}








































