#include"functions.h"

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

void choose_your_limit_message()
{
	printf("Choose your limit :\n");
}

void print_result(int table , int limit)
{
	int i;
	for (i = 0; i < limit; i++)
	{
		printf("%d x %d  = %d \n", table, i , table*i);
		/* code */
	}


}


int multiplication()
{
	// variables
	int my_table = 0 ;
	int my_limit;
	//int i;
	choose_your_table_message();
	scanf("%d",&my_table);
	choose_your_limit_message();
	scanf("%d", &my_limit);
	//for (i = 0; i < my_limit; i++)
	//{
	//	printf("%d x %d  = %d \n", my_table, i , my_table*i);
		/* code */
	//}
	print_result(my_table,my_limit);
	return 0;
}