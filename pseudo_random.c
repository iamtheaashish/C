#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int our_random_function(int max)
{
	int x;

	x = rand() % max + 1;

	return x;
}

int main()
{
	int random;

	srand(getpid());


	for(int i = 0; i <= 5; ++i)
	{
		sleep(3);
		random = our_random_function(11);
		printf("%d\n", random);
	}

	return 0;
}