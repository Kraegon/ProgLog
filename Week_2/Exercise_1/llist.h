/*extern int llist_addNew(char* nodeContent);
//extern int 

struct Node
{
	char* content;
	struct Node *nextNode;
	struct Node *previousNode;
};*/

extern void llist_add(char* item);
extern void llist_show();
extern void llist_remove(char* item);
