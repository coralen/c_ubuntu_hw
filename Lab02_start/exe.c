#include "lab2.h"
#include "arrays.h"
#include <stdio.h>


#define ARR_SIZE 5
#define ROWS 2
#define COLS 2

void q1_A()
{
	printf("Question 1-A\n");
	int arr[] = { 1, 2, 3, 4, 5 };
	int lenght = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, lenght);
	printf("The result is: %d\n", checkArray(arr, lenght));
}

void q1_B()
{
	printf("Question 1-B\n");
	int arr[ARR_SIZE];
	initArray(arr, ARR_SIZE);
	printArray(arr, ARR_SIZE);
	printf("The result is: %d\n", checkArray(arr, ARR_SIZE));
}

void q2()
{
	printf("Question 2\n");
	char ch = 'a';
	char mat[ROWS][COLS];
	initMat(ROWS, mat);
	printMat(ROWS, mat);
	int result = countCharInMat(ROWS, mat, ch);
	printf("The result is: %d\n", result);
}


