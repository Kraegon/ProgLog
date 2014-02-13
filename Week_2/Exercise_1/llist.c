#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LAST_NODE NULL

typedef struct node {
	struct node* prev;
	struct node* next;
	char* item;
} node;
struct node* cursor = NULL;

void llist_add(char* item)
{	
	struct node* newnode = malloc(sizeof(node));
	newnode->prev = cursor;
	newnode->next = NULL;
	newnode->item = item;
	if(cursor!=NULL)
	{
		cursor->next = newnode; 
	}
	cursor = newnode;
}

node* getfirstnode()
{
	struct node *firstnode = cursor;
	while(firstnode->prev!=NULL)
	{
		firstnode = firstnode->prev;
	}
	return firstnode;
}

void llist_show()
{
	if(cursor==NULL){printf("The linked list is empty\n"); return;}
	struct node *firstnode = getfirstnode();
	
	while(1)
	{
		printf("prev node is at: %x\nnext node is at: %x\nitem is %s\n\n", firstnode->prev, firstnode->next, firstnode->item);
		if (firstnode->next!=NULL)
		{
			firstnode = firstnode->next;
		}
		else { break; }
	}
}

void llist_remove(char* item)
{
	if(cursor==NULL){printf("The linked list is empty\n"); return;}
	struct node *tempcursor = getfirstnode();
	while(1)
	{
		if (strcmp(tempcursor->item, item) == 0)
		{
			if (tempcursor->prev!=NULL)
			{
				tempcursor->prev->next=tempcursor->next;
			}
			if (tempcursor->next!=NULL)
			{
				tempcursor->next->prev=tempcursor->prev;
			}
			free(tempcursor);
			break;
		}
		if (tempcursor->next!=NULL)
		{
			tempcursor = tempcursor->next;
		}
		else { break;}
	}
}


