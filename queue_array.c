#include<stdio.h>
#include<stdlib.h>
#define max 20
int queue[max];
int rear=-1;
int front =-1;
void enqueue();
void dequeue();
void display();
int main()
{
	int option;
	do
	{
		printf("\n\n*******MENU*********");
		printf("\n\n1. ENQUEUE");
		printf("\n\n2. DEQUEUE");
		printf("\n\n3. DISPLAY");
		printf("\n\n4. EXIT");
		printf("\n\nEnter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : enqueue();
					 break;
			case 2 : dequeue();
					 break;
			case 3 : display();
					 break;
		}
	}while(option<5);
	return 0;
}

void enqueue()
{
	int data;
	printf("Enter element : ");
	scanf("%d",&data);
	if(front == -1)
	{
		front++;
	}
	if(rear == max-1)
	{
		printf("Queue is full.");
		exit(0);
	}	
	rear++;
	queue[rear] = data;
}

void dequeue()
{
	if(rear==-1)
	{
		printf("Queue is empty...");
		exit(0);
	}
	int val;
	val = queue[front];
	printf("dequeue : %d",val);
	front++;
	if(front>rear)
	{
		front=rear=-1;
	}
}

void display()
{
	int i;
	for(i=front; i<rear; i++)
	{
		printf("%d\t",queue[i]);
	}
}
