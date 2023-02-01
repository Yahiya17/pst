#include<stdio.h>
#include<conio.h>
void main()
{
int a[25],n,i,j,k,f=0;
clrscr();
printf("Enter the size of array ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter data : ");
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;k++)
a[k]=a[k+1];
j--;
n--;
f++;
}
}
}
if(f==0)
{
printf("No Duplicate element is found ");
}
else
{
printf("No of duplicate element is %d\n",f);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
getch();
}

