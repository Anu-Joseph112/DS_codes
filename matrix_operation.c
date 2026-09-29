#include <stdio.h>
int main()
{
int a[10][10],b[10][10],result[10][10];
int r1,c1,r2,c2;
int i,j,k,choice;
printf("enter the rows and colums of first matrix");
scanf("%d %d",&r1,&c1);
printf("enter the elments of the  first matrix \n");
for (i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the rows and colums of second matrix");
scanf("%d %d",&r2,&c2);
printf("enter the elments of the  second matrix \n");
for (i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
do
{
printf(" MATRIX OPERATION \n");
printf("1.Addition \n");
printf("2.Sustraction \n");
printf("3.Multiplication \n");
printf("4.Transpose of first matrix \n");
printf("5.Exit \n");
printf(" Enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(r1==r2&&c1==c2)
{
printf("Addition\n");
for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
{
result[i][j]=a[i][j]+b[i][j];
printf("%d",result[i][j]);
}
printf("\n");
}}
else 
printf("Addition not possible \n");
break;
case 2:
if(r1==r2&&c1==c2)
{
printf("Substraction\n");
for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
{
result[i][j]=a[i][j]-b[i][j];
printf("%d",result[i][j]);
}
printf("\n");
}}
else 
printf("Substraction not possible \n");
break;
case 3:
if(c1==r2)
{
printf("Multiplication\n");
for (i=0;i<r1;i++)
{
for (j=0;j<c2;j++)
{
result[i][j]=0;
for (k=0;k<c1;k++)
{
result[i][j]+=a[i][k]*b[k][j];
}
printf("%d",result[i][j]);
}
printf("\n");
}}
else 
printf("Multiplication not possible \n");
break;
case 4:
printf("Transpose of first matrix \n");
for (i=0;i<c1;i++)
{
for (j=0;j<r1;j++)
{
printf("%d",a[j][i]);
}
printf("\n");
}
break;
case 5:
printf("existing program \n");
break;
default:
printf("invalid choice \n");
}
}
while(choice !=5);
return 0;
}


