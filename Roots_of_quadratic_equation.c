#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
float a,b,c,r1,r2,dis;
clrscr();
printf("Enter the value of A B and C\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0.0)
{
printf("Quadratic equation is not possible\n");
}
else
{
dis=b*b-4*a*c;
if(dis==0.0)
{
r1=-b/2.0*a;
printf("Roots are real and Equal\n");
printf("Discriminant = %f\n",dis);
printf("Root 1 = %f\nRoot 2 = %f\n",r1,r1);
}
else if(dis>0)
{
r1=-b+(sqrt(dis))/2.0*a;
r2=-b-(sqrt(dis))/2.0*a;
printf("Roots are Real and Unequal\n");
printf("Discriminant = %f\n",dis);
printf("Root 1 = %f\nRoot 2 = %f\n",r1,r2);
}
else
{
dis=-dis;
r1=-b/2.0*a;
r2=sqrt(dis);
printf("Complex Roots\n");
printf("Discriminant = %f\n",dis);
printf("Root 1 = %f + | %f\n",r1,r2);
printf("Root 2 = %f - | %f\n",r1,r2);
}
}
getch();
}

