#include <stdio.h>
#include <stdlib.h>

void dToB(long num);
void sToI(int argc, char ** argv);
int check(int argc, char ** argv);

int main(int argc, char **argv)
{
	check(argc, argv);

exit(0);
}



void sToI(int argc, char ** argv)
{	
	int bin;
	char * end;
	for (int j = 1; j < argc; j++)
	{	
		*argv = end;
		bin = (long unsigned)strtol(argv[j], &end, 10);
		if((0 <= bin) && (bin <= 15))
			dToB(bin);
		else
			printf("Must be between 0-15, restart executable.\n");
	}
}

int check(int argc, char ** argv)
{
	if(argc == 1)
	{
		printf("No arguments, execute with arguments.\n");
		exit(0);
	}

	sToI(argc, argv);
}

void dToB(long num)
{	

		for (int i = 0; i <= 3; i++)
		{
    		(num & 0x8) ? printf("1") : printf("0");
    		num <<= 1;    		
    	}
    printf("\n");
} 

