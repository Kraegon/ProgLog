#include <stdio.h>
#include <unistd.h>
#include <stdio.h> 
#include <string.h> 		

/*
 * Commentary enhanced version of exercise 5.0a
 *  @Author: Julian G. West
 */
int main(){
	exercise5_1();
	return 0;
}

int exercise5_0c(){
	int k;
	printf("An int please. \n>>");
	scanf("%d", &k);
	return k;
}

void exercise5_0(){
	int k =47, *p = &k; //Allocate 47 to ' pointee' k and set pointer p to point towards k's address.

	printf("This is pointer &p: %p \n",&p);   	//Memory address of pointer p (Where p is)
	printf("This is pointer p: %p \n",p);     	//The contents of p (What p points to)
	printf("This is pointer &k: %p \n",&k);   	//The address of k (Same as above)
	printf("This is decimal *p: %d \n",*p);   	//Decimal representation of p's contents (k)
	printf("This is decimal k: %d \n",k);		//Decimal representation of k

	*p = 87;									//Assigned value 87 to location of pointer p -> k is now 87

	printf("This is decimal *p: %d \n",*p);		//Decimal representation of p's contents (now 87)
	printf("This is decimal k: %d \n",k);		//Decimal representation of k (also now 87)
	printf("This is decimal **&p: %d \n",**&p);	//Decimal representation of the contents of a pointer pointing to a pointer pointing to the address of pointer p.
}
void exercise5_1(){
	char *groet;

	groet = malloc(50);
	groet = "hallo\n"; //Newlines and kind count towards the total length.
	printf(groet);

	int groetLngth = strlen(groet);
	printf("The amount of characters in this string is: %d \n", groetLngth);

	groet = "Hoi, hoe gaat het\n";
	printf(groet);

	groet = malloc(50);
	groet = strcat(groet, " met jou?\n");
	printf(groet);
}