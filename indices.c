#include<stdio.h>
int main()
{
int a[20],n,i,j,k,l;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter sum");
scanf("%d",&k);
int flag=-1;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
for(l=j+1;l<n;l++)
{
if((a[i]+a[j]+a[l])==k)
{
printf("indices found at %d, %d and %d",i,j,l);
flag=0;
}
}
}
}
if(flag==-1)
printf("no indices found");
return 0;
}