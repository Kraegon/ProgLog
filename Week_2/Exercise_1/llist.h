extern int llist_addNew(char* nodeContent);
//extern int 

struct Node
{
	char* content;
	struct Node *nextNode;
	struct Node *previousNode;
};