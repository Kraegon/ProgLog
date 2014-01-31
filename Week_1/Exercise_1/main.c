#include <stdio.h>
#include <unistd.h>


/*
 * 'Hello world' application testing Ubuntu based C set up.
 *  @Author: Julian G. West
 */
void main()
{
	int cnt;
	cnt = 0;
	while(1)
	{
		cnt++;
		printf("I'm alive! %d \n", cnt);
		fflush(stdout);
		sleep(1);
	}	
}