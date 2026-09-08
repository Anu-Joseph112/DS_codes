#include <stdio.h>
int main()
{
int a[10],n,key;
int low ,high,mid;
int i,found=0;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter %d elements in sorted order:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
printf("element found at position %d\n",mid+1);
found=1;
break;
}
else if (key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}}
if(found==0)
{
printf("element not found\n");
}
return 0;
}

