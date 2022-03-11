#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXSIZE 4
int q[30],rear=-1,front=-1;
void enqueue(int ele)
{

if(rear=MAXSIZE-1)
{
printf("Queue is full");
exit(0);
}
q[rear]=ele;
if(front==-1)
{
front=0;
}
}
void dequeue()
{
int ele;
if(front==-1)
{
printf("Queue is empty ");
exit(0);
}
ele=q[front++];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%MAXSIZE;
printf(" %d Removed item\n",ele);
}
}
void display()
{
int i;
if(front==-1)
{
printf("Queue is empty");
exit(0);
}
if(front<=rear)
{
printf("Queue contains:");
for(i=front;i<=rear;i++)
printf("%d",q[i]);
}
else
{
for(i=front;i<MAXSIZE;i++)
{
printf("%d",q[i]);
}
for(i=0;i<=rear;i++)
{
printf("%d",q[i]);
}
}
}

void main()
{
int ch,ele,op=1;
while(op)
{
printf("Select the operation \n");
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Insert the value to be inserted");
       scanf("%d",&ele);
       enqueue(ele);
       break;
case 2:dequeue();
       break;
case 3:display();
       break;

default:printf("Invalid choice");
       }
printf("Do you want continue(0/1)\n");
scanf("%d",&op);
}
}


