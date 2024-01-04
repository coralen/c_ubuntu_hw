#include <stdio.h>
int i;

void printTriangle(int base)
{
	if(base == 0) return;
	
	else
	{
		
		printTriangle(base-1);
		
		for (i=0; i<base; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void helloWorld()
{
	printf("Hello World\n");
}
