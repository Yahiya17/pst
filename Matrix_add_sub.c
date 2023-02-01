#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],row1,row2,col1,col2,i,j;
clrscr();
printf("Enter the no of rows and columns of matrix 1");
scanf("%d%d",&row1,&col1);
printf("Enter the no of rows and columns of matrix 2");
scanf("%d%d",&row2,&col2);
if(row1==row2&&col1==col2)
{
printf("Enter data of the matrix 1\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("Enter data : ");
scanf("%d",&a[i][j]);
}
}
printf("Enter data of the matrix 2\n");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
printf("Enter data : ");
scanf("%d",&b[i][j]);
}
}

for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Matrix Addition\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("Matrix Subtraction \n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}


}
else
{
printf("Operations are not possible on this matrix ");
}
getch();
}

