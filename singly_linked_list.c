#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
void insert_pos();
struct node *insert_end();
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
void delete_pos();
int count();
int main()
{
	int option;
	do
	{
		printf("\n\n*******MENU*********");
		printf("\n\n1. CREATE LINKED LIST");
		printf("\n\n2. DISPLAY LINKED LIST");
		printf("\n\n3. INSERT AT BEGINNING");
		printf("\n\n4. INSERT AT END");
		printf("\n\n5. INSERT AT POSITION");
		printf("\n\n6. DELETE FROM BEGINNING");
		printf("\n\n7. DELETE FROM END");
		printf("\n\n8. DELETE FROM A POSITION");
		printf("\n\n9. EXIT");
		printf("\n\nEnter your option : ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			start = create(start);
			printf("LINKED LIST CREATED");
			break;
		case 2:
			start = display(start);
			break;
		case 3:
			start = insert_beg(start);
			break;
		case 4:
			start = insert_end();
			break;
		case 5:
			insert_pos();
			break;
		case 6:
			start = delete_beg(start);
			break;
		case 7:
			start = delete_end(start);
			break;
		case 8:
			delete_pos();
			break;
		}
	} while (option < 9);
	return 0;
}

struct node *create(struct node *start)
{
	struct node *ptr, *newnode;
	int num;
	printf("Enter -1 to end\n");
	printf("\nEnter the data : ");
	scanf("%d", &num);
	while (num != -1)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = num;
		newnode->next = NULL;
		if (start == NULL)
		{
			start = newnode;
		}
		else
		{
			ptr = start;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = newnode;
		}
		printf("\nEnter the data : ");
		scanf("%d", &num);
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *ptr;

	if (start == NULL)
	{
		printf("\n\nLINKED LIST IS EMPTY");
	}
	else
	{
		ptr = start;
		printf("\n\n\t*****LINKED LIST*****\n\n");
		while (ptr != NULL)
		{
			printf("%d\t", ptr->data);
			ptr = ptr->next;
		}
	}
	return start;
}

struct node *insert_beg(struct node *start)
{
	int num;
	struct node *newnode;
	printf("Enter data to insert at begining : ");
	scanf("%d", &num);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = num;
	newnode->next = start;
	start = newnode;
	return start;
}

struct node *insert_end()
{
	int num;
	struct node *newnode, *ptr;
	printf("Enter data to insert at end : ");
	scanf("%d", &num);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = num;
	newnode->next = NULL;
	ptr = start;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newnode;
	return start;
}

void insert_pos()
{
	int cnt, pos, i = 1, data;
	struct node *ptr, *preptr, *newnode;
	ptr = start;
	cnt = count();
	while (ptr != NULL)
	{
		cnt++;
		ptr = ptr->next;
	}
	printf("Total number of elements in linked list : %d. You can insert new elements based on this count", cnt);
	printf("\nEnter the position : ");
	scanf("%d", &pos);
	ptr = start;
	if ((cnt >= pos || pos == cnt + 1) && pos != 0)
	{

		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data : ");
		scanf("%d", &data);
		newnode->data = data;
		newnode->next = NULL;

		while (i < pos)
		{
			preptr = ptr;
			ptr = ptr->next;
			i++;
		}

		if (start == ptr)
		{
			newnode->next = ptr;
			start = newnode;
		}
		else
		{
			preptr->next = newnode;
			newnode->next = ptr;
		}
	}

	else
	{
		printf("invalid");
	}
}

struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr = start;
	start = start->next;
	free(ptr);
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *ptr, *preptr;
	ptr = start;
	while (ptr->next != NULL)
	{
		preptr = ptr;
		ptr = ptr->next;
	}

	preptr->next = NULL;
	free(ptr);
	return start;
}
void delete_pos()
{

	struct node *ptr, *preptr;
	int pos, i = 1, cnt;
	cnt = count();
	printf("\n\nTotal number of elements in linked list is %d. You can delete element based on this count", cnt);
	printf("\n\nEnter the position : ");
	scanf("%d", &pos);
	ptr = start;

	if ((cnt >= pos && pos != 0))
	{
		while (i<pos)
		{
			preptr = ptr;
			ptr = ptr->next;
			i++;
		}

		if(start == ptr){
			start = ptr -> next;
			free(ptr);
		}
		else{
			preptr -> next = ptr -> next;
		}
	}

	else{
		printf("Not Possible");
	}
}

int count()
{
	int count = 0;
	struct node *ptr;
	ptr = start;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return count;
}
