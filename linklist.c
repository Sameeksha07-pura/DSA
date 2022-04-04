#include<stdio.h>
#include<stdlib.h>
typedef struct Node* lstptr;
struct Node
{
  int data;
  lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
lstptr node;
node=(lstptr)malloc(sizeof(struct Node));
return node;
}

void insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
new->link=first;
first=new;
}

void insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
else
first=new;
}

void display()
{
lstptr temp;
if(first==NULL)
{
printf("List is empty\n");
exit(0);
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}

void deleteBegin(int ele)
{
lstptr temp;
if(first==NULL)
{
printf("List is empty\n");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
first=first->link;
free(temp);
}
}

void deleteEnd(int ele)
{
lstptr temp,prev;
if(first==NULL)
{
printf("List is empty\n");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
{
 prev=temp;
  while(temp->link!=NULL)
  {
   prev=temp;
   temp=temp->link;
  }
prev->link=NULL;
free(temp);
}
}

}

void main()
{
int ch,opt=1,ele;

while(opt)
{
printf("\n 1.INSERT_BEGIN\n 2.INSERT_END\n 3.DELETE_BEGIN\n 4.DELETE_END\n 5.DELETE_SPECIFIC\n 6.DISPLAY\n");
printf("Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:printf("Enter the element to be inserted:");
       scanf("%d",&ele);
       insertBegin(ele);
       break;
case 2:printf("Enter the element to be inserted:");
       scanf("%d",&ele);
       insertEnd(ele);
       break;
case 3:deleteBegin(ele);
       break;
case 4:deleteEnd(ele);
       break;
case 6:display();
       break;
}
printf("\nDo you want continue:");
scanf("%d",&opt);
}
}
