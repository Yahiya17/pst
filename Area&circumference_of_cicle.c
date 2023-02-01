#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float area,circum,pi=3.14;
clrscr();
printf("Enter the radius ");
scanf("%d",&r);
area=pi*r*r;
circum=2*pi*r;
printf("Area of circle %f\nCircumference of circle %f\n",area,circum);
getch();
}

