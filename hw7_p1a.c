/*	Author: Parker Mathewson
 *	Date: 3/19/12
 *	Comments: This program is one to take all the vowels out of a
 *			string.
 */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define ARRAY_SIZE 50

void array_init(char *no_vowels_string)
{
	int i=0;

	for(i=0; i<ARRAY_SIZE; i++)
	{
		no_vowels_string[i]=0;
	}
}

void no_vowels(char *static_string_a, char *no_vowels_string, int str_len)
{
	int i=0, counter=0;

	for(i=0; i<str_len; i++)
	{
		if(static_string_a[i] == 65 || static_string_a[i]  == 69 || static_string_a[i]  == 73 || static_string_a[i]  == 79 || static_string_a[i]  == 85 || static_string_a[i]  == 97 || static_string_a[i]  == 101 || static_string_a[i]  == 105 || static_string_a[i]  == 111 || static_string_a[i]  == 117)
				counter++;

		if(static_string_a[i]  != 'A' && static_string_a[i]  !='E' && static_string_a[i]  !='I' && static_string_a[i]  != 'O' && static_string_a[i]  != 'U' && static_string_a[i]  != 'a' 
			&& static_string_a[i]  != 'e' && static_string_a[i]  != 'i' && static_string_a[i]  != 'o' && static_string_a[i]  != 'u')
				no_vowels_string[i-counter] = static_string_a[i];
	}
}

int main(void)
{
	char static_string_a[]="These aren't the droids we're looking for.";
	char no_vowels_string[50];
	int str_len=0;

	str_len = strlen(static_string_a);

	array_init(no_vowels_string);
	no_vowels(static_string_a, no_vowels_string, str_len);

	printf("%s\n", static_string_a);
	printf("%s\n", no_vowels_string);

	return(0);
}
