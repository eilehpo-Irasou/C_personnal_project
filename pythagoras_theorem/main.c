#include <stdio.h>
#include<math.h>
void print_welcome_message()
{
	printf("THIS PROGRAM IS ABOUT PYTHAGORAS THEOREM.\n");

}

void what_length()
{
	printf("what is the length of the side ? \n");
}

void verify_number(double number)
{
	if (number >= 1 ||  number <=9)
	{
		printf("This is a number \n");
		/* code */
	}
	else
	{
		printf("This is not a number\n");
		//verify_number(number);

	}

}


 void calculate_hypotenuse()
 {
 	double side1 = 0;
 	double side2 = 0;
 	double hypotenuse = 0;

 	what_length();
 	scanf("%le",&side1);
 	what_length();
 	scanf("%le",&side2);

 	verify_number(side1);
 	verify_number(side2);

 	printf("%f, %f\n",side1,side2);

 	hypotenuse = sqrt((side1*side1)+(side2*side2));

 	printf("hypotenuse : %f\n",hypotenuse );

 }





int main(int argc, char const *argv[])
{
	print_welcome_message();
	verify_number(55);
	calculate_hypotenuse();

	/* code */
	return 0;
}