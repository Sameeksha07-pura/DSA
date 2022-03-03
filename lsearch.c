#include<stdio.h>
#include<stdlib.h>

int main() {
	int array[10];
	int size = 0;
	int element = 0;
	printf("Enter the array size:");
	scanf("%d", &size);
	printf("Enter the array elements:");
	for (int i = 0; i < size; i++) 
{
		scanf("%d", &array[i]);
	}
	printf("Enter the element:");
	scanf("%d", &element);
	for (int i = 0; i < size; i++) 
{
		if (array[i] == element) 
{
			printf("element found at the location:%d",i);
			exit(0);
		}	
	}
	printf("Item doesnot exists\n");
	return 0;
}

