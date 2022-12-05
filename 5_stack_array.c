#include<stdio.h>
#define max 20
int stack[max];
int top=-1;
void push();
void pop();
void peek();
void display();
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
			case 1 : push();
					 printf("PUSHED");
					 break;
			case 2 : pop();
					 break;
			case 3 : peek();
					 break;
			case 4 : display();
					 break;
		}
	}while(option<5);
	return 0;
}

void push()
{
	int data;
	printf("Enter data : ");
	scanf("%d",&data);
	if(top == max-1)
	{
		printf("\n\nStack overflow");
	}
	else
	{
		top++;
		stack[top] = data;
	}
}

void pop(){
	int value;
	if(top == -1)
	{
		printf("\n\nStack underflow...");
	}
	else
	{
		value = stack[top];
		top--;
		printf("%d popped from stack..",value);
	}
}

void peek()
{
	if(top == -1)
	{
		printf("\n\nStack is empty..");
	}
	else
	{
		printf("Top most element of stack is %d...",stack[top]);
	}
}

void display()
{
	int i;
	printf("\n\nElements in Stack are : \n");
	for(i=top;i>=0;i--)
	{
		printf("\t\t\t\t%d\n",stack[i]);
	}
	
}
		





		



















