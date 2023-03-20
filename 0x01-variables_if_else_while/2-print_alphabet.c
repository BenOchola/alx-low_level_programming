#include<stdio.h> 
#include<stdlib.h>

/*
 * main functionto display Alphabets written in lowwer case
 *
 *
 * return (sucess)
 *
 */

int main(void)
{
	char lower_Alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i - 0; i < 26; i++)
	{
		putchar(lower_Alph[i]);
	}
	putchar('\n');
	return (0);
}
