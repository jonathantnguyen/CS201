#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>

void check(int argc, char ** argv);
void hToD(int argc, char ** argv);
void compare(int argc, char ** argv);



int main(int argc, char ** argv)
{
	check(argc, argv);
	hToD(argc, argv);
	
	exit(0); 
}

void check(int argc, char ** argv)
{
	if(argc != 3)
	{
		printf("Must enter two arguments.\n");
		exit(0);
	}
}

void hToD(int argc, char ** argv)
{
	char * end;
	*argv = end;

	for(int j = 1; j < argc; j++)
	{
		if(errno != 0)
			exit(0);

		int k = sizeof(argv[j]);
		int num_array[j-1] = (long unsigned)strtoul(argv[j], &end, 16);
		compare(argc, num_array);
	}
}

void compare(int argc, char ** argv)
{
	int num_one = num_array[0];
	int num_two = num_array[1];

	printf("Number 1: %i, Number 2: %i \n", num_one, num_two );
}