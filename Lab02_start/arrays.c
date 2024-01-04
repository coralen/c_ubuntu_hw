#include <stdio.h>
#include <ctype.h>


int i, j;
int lenght;

void printArray(int arr[], int lenght)
{
	printf("Printing array: \n");
	for(i=0; i<lenght; i++)
	{ 
		printf("%d ", arr[i]);
	}
	printf("\n");
	
}

void initArray(int arr[], int lenght)
{
	printf("Enter array elements\n");
	for(i=0; i<lenght; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void printMat(int lenght, char (*mat)[lenght])
{
	printf("Printing matrix: \n");
	for(i=0; i<lenght; i++)
	{
		for(j=0; j<lenght; j++)
		{
			printf("%c\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}



void initMat(int lenght, char (*mat)[lenght])
{
	
	printf("Enter matrix elements\n");
	for(i=0; i<lenght; i++)
	{
		for(j=0; j<lenght; j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf(" %c", &mat[i][j]);
		}
	}
	printf("\n");
}

