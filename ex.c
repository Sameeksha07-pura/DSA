#include<stdio.h>
void main()
{
int incoming,outgoing,buffsize,n,store=0,res;
printf("Enter the packet size:");
scanf("%d",&n);
printf("Enter buffersize :");
scanf("%d",&buffsize);
printf("Enter outgoing value");
scanf("%d",&outgoing);
while(n!=0)
{
printf("Enter the incoming packet size:");
scanf("%d",&incoming);
if(incoming<=(buffsize-store))
{
store+=incoming;
}
else
{
res=(incoming-(buffsize-store));
printf("Dropped packets are %d:",res);
store=buffsize;
printf("After dropped packets %d",store);
}
store=store-outgoing;
n--;
}
}
