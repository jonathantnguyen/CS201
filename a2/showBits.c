#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>

void check(int argc, char ** argv);
void hToD(int argc, char ** argv);


int main(int argc, char ** argv)
{
	check(argc, argv);
	hToD(argc, argv);
	exit; 
}

void check(int argc, char ** argv)
{
	if((argc == 1)  || (argc >=4))
	{
		printf("No arguments, execute with arguments.\n");
		exit;
	}
}

void hToD(int argc, char ** argv)
{
	char * end;
	*argv = end;

	for(int j = 0; j <= argc; j++)
	{
		if(errno != 0)
			exit;

		int bin = (long unsigned)strtoul(argv[j], &end, 16);
		printf("Value: %lu \n", bin);
	}

}
