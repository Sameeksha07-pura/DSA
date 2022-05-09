#include<stdio.h>
#include<stdlib.h>
int number;
int root[10];
int cost[10][10];
void doUnion(int root[],int v1,int v2)
{
int temp,i,n;
temp=root[v2];
for(i=0;i<n;i++)
{
if(root[i]==temp)
{
root[i]==root[v1];
}
}
}

int findminimum()
{
int minimum=99;
for(int t=0;t<number;t++)
{
for(int k=0;k<number;k++)
{
if(cost[t][k]>0 && cost[t][k]<minimum)
{
cost[t][k];
v1=t;
v2=k;
}
}
}
}
int mincost;
int weightedge;
void kruskal()
{
int i,edgewt,n,v1,v2;
int root[n];
for(i=0;i<n;i++)
{
root[i]=i;
printf("\n Edge of min cost spanning tree are");
edgewt=cost[v1][v2];
cost[v1][v2]=cost[v2][v1]=0;
if(root[v1]==[v2])
{
printf("\n""(%d,%d)",v1,v2);
doUnion(root,v1,v2);
mincost+=edgewt;
i++;
}
}
printf("\n cost of minimum spanning tree=%d",mincost);
}

void main()
{
int i,j;
printf("Enter the number of vertices:");
scanf("%d",&n);
printf("Enter the undirected graph as adjacency matrix\n");
for(i=o;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d\t",&cost[i][j]);
}
}



