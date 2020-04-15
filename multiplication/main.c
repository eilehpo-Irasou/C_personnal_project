#include <stdio.h>

// print some messages about multiplication table

void welcome_message()
{
	printf("Hello !\n");
	printf("You choose your table to print.\n");
	printf("After, you choose a limit to print all the results.\n");
}

void choose_your_table_message()
{
	printf("Choose your table :\n");
}

void choose_your_limit()
{
	printf("Choose your limit :\n");
}

int main(int argc, char const *argv[])
{
	/* code */

	welcome_message();
	return 0;
}