#define LAST_NODE NULL


struct Node *nodecursor;

/*
 * Features:
 * Add
 * Remove
 * Insert
 * ... 
 */

int llist_addNew(char* value){
	if(nodecursor->con)
	nodecursor->content = value;
	printf((nodecursor->content));
}
