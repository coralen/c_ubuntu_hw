

int checkArray(int arr[], int lenght)
{
	int i;
	for(i=0; i<lenght-1; i++)
	{
		if(!(arr[i] < arr[i+1]))
		{
			return 0;
		}
	}
	return 1;
}


int  countCharInMat(int lenght, char (*mat)[lenght], char ch)
{
	int i, j, count;
	for(i=0; i<lenght; i++)
	{
		for(j=0; j<lenght; j++)
		{
			if(mat[i][j] == ch)
			{
				count++;
			}
		}
	}
	return count;
}
