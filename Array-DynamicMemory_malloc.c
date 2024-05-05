#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, index, i, j, k = 0;

	printf("Enter number of rows: ");
	scanf("%d", &m);
	printf("Enter number of columns: ");
	scanf("%d", &n);
	index = m * n;
	float *matriVal = (float *)malloc(index * sizeof(float));

	if (matriVal == NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}
	for (i = 0; i < index; i++)
	{
		scanf("%f", &matriVal[i]);
	}

	float max = matriVal[0];
	float min = matriVal[0];

	for (i = 0; i < index; i++)
	{

		if (matriVal[i]>max){
			max= matriVal[i];
		}
	}
	for (i = 0; i < index; i++)
	{

		if (matriVal[i]<min){
			min= matriVal[i];
		}
	}
	min= min*(-1);
	max=max+min;
	for (i = 0; i < index; i++)
	{
		matriVal[i]=(matriVal[i]+min)/max;
	}
	

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%f ", matriVal[k]);
			k++;
		}
		printf("\n");
	}
	free(matriVal);
	return 0;
}
