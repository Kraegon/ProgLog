#include <stdlib.h>
#include "llist.h"

int main(void){
	llist_add("awesome");
	llist_add("cool");
	llist_add("stoer");
	llist_show();
	llist_remove("stoer");
	llist_show();
}
