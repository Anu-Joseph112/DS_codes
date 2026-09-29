#include <stdio.h>
int main()
{
int a[10],b[10],c[20];
int n,m,i;
printf("enter the size of first array:");
scanf("%d",&n);
printf ("enter the elements of first array \n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
printf("enter the size of second array:");
scanf("%d",&m);
printf ("enter the elements of second array \n");
for (i=0;i<m;i++)
{
scanf("%d",&b[i]);
c[n+i]=b[i];
}
printf("merged array: \n");
for(i=0;i<n+m;i++)
{
printf("%d ",c[i]);
}
return 0;
}
