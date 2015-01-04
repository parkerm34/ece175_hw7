/*	Author: Parker Mathewson
 *	Date: 3/20/12
 *	Comment: This program is meant to print the words in a string in the reverse order.
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define ARRAY_SIZE 50

void array_init(char *reverse_string, int size)
{
	int counter_init=0;

	for(counter_init=0; counter_init<size; counter_init++)
		reverse_string[counter_init]=0;
}

void reverse_words(char *static_string_a, char *reverse_string, int static_string_length)
{
	int a=0, b=0, c=0;

	for(a=static_string_length; a>=0; a--)
	{
		if(static_string_a[a] == ' ')
		{
			b = a+1;
			while(static_string_a[b] != ' '&&static_string_a[b] != '\0')
			{
				reverse_string[c] = static_string_a[b];
				c++;
				b++;
			}
			reverse_string[c] = ' ';
			c++;
		}
	}
}

int main(void)
{
	char static_string_a[]="These aren't the droids we're looking for.";
	char reverse_string[50];
	int static_string_length=0;
	static_string_length=strlen(static_string_a);

	array_init(reverse_string, ARRAY_SIZE);
	reverse_words(static_string_a, reverse_string, static_string_length);

	printf("%s", static_string_a);
	printf("\n%s\n", reverse_string);

	return(0);
}
