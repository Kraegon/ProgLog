#include <stdlib.h>
#include <stdio.h>
#include "llist.h"

int main(void){
	llist_add("awesome");
	llist_add("cool");
	llist_add("stoer");
	printf("number of items in llist is now %d\n", llist_nrItems());
	printf("item awesome %s\n", (llist_excist("awesome")?"does exist":"does not exist"));
	llist_show();
	llist_remove("stoer");
	llist_show();
	llist_clear();
	llist_show();
}
