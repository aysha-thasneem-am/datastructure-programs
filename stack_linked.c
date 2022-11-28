#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top = NULL;
struct node *push(struct node *);
struct node *pop(struct node *);
struct node *peek(struct node *);
struct node *display(struct node *);
int main()
{
	int option;
	do
	{
		printf("\n\n*******MENU*********");
		printf("\n\n1. PUSH");
		printf("\n\n2. POP");
		printf("\n\n3. PEEK");
		printf("\n\n4. DISPLAY");
		printf("\n\n5. EXIT");
		printf("\n\nEnter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : top = push(top);
					 printf("PUSHED");
					 break;
			case 2 : top = pop(top);
			         printf("POPPED");
					 break;
			case 3 : top = peek(top);
					 break;
			case 4 : top = display(top);
					 break;
		}
	}while(option<5);
	return 0;
}

struct node *push(struct node *top)
{
	int num;
	struct node *newnode;
	printf("Enter the element : ");
	scanf("%d", &num);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = num;
	if(top == NULL)
	{
		top = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = top;
		top = newnode;
	}
	return top;
}

struct node *pop(struct node *top)
{
	if(top==NULL)
	{
		printf("\n\nStack Underflow..");
	}
	struct node *ptr;
	int val;
	val = top->data;
	ptr = top;
	top = top->next;
	free(ptr);
	printf("POPPED ELEMENT IS %d...",val);
	return top;
}

struct node *peek(struct node *top)
{
	if(top==NULL)
	{
		printf("\n\nStack is empty");
	}
	else
	{
		printf("TOP MOST ELEMENT IS %d",top->data);
	}
	return top;
}

struct node *display(struct node *top)
{
	struct node *ptr;
	if(top==NULL)
	{
		printf("\n\nStack is empty");
	}
	else
	{
		printf("STack elements are : \n");
		ptr = top;
		while(ptr!=NULL)
		{
			printf("\t\t\t%d\n",ptr->data);
			ptr = ptr->next;
		}
	}
	return top;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
