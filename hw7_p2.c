/*	Author: Parker Mathewson
 *	Date: 3/20/12
 *	Comment: This is to show that we can do arithmetic using arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void array_init(int *array_1, int size)
{
	int i=0;

	for(i=0; i<size; i++)
		array_1[i] = 0;
}

int sum_function(int *grades, int size)
{
	int i=0, sum=0;

	for(i=0; i<size; i++)
		sum+=grades[i];

	return (sum);
}

float average_function(int size, int sum)
{
	float average=0;

	average = sum/size;

	return (average);
}

int main(void)
{
	int grades[20];
	int sum=0, min=0, max=0, i=0, solo=0;
	float average=0;
	FILE *input;

	array_init(grades, SIZE);

	input = fopen("student_data.txt","r");
	if(input== NULL)
		printf("Error reading specified file.");
	else
	{
		for(i=0; i<20; i++)
		{
			fscanf(input,"%d", &solo);
			grades[i]=solo;
		}
		sum=sum_function(grades, SIZE);
		average=average_function(SIZE, sum);

		min = grades[0];
		max = grades[0];

		for(i=0; i<SIZE; i++)
		{
			if(min >= grades[i])
				min = grades[i];
			if(max <= grades[i])
				max = grades[i];
		}

		printf("The sum is: %d\n", sum);
		printf("The average is: %.2f\n", average);
		printf("The max is: %d\n", max);
		printf("The min is: %d\n", min);

	}
	return(0);
}
