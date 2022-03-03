#include<stdio.h>
int main()
{
int a[10],n,j,temp,max,i;
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the element after selection sort");  
for(i=0;i<n;i++)
{
max=i;
for(j=i+1;j<n;j++)
{
if(a[j]>a[max])
{
max=j;
}
}
if(max!=i)
{
temp=a[i];
a[i]=a[max];
a[max]=temp;
}
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}

