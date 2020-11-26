#include <stdio.h>
#include <stdlib.h>
/*** Formulas for areas
- square
- rectangle
- 

*/

int square_area(int side)
{
	int area = 0;
	area = side*side;
	return area;
}

int rectangle_area(int length, int width)
{
	int area = 0;
	area = length * width;
	return area;

}

int triangle_area(int base,int height)
{
	int area = 0 ; 
	area = (base*height)/2;
	return area;
}

int menu(int action )
{
	int a ;
	int choice ;
	if(action == 1)
	{
		printf("write a number\n");
		scanf("%d", &a);
		printf("sure ? \n");
		scanf("%d",&choice);
		if (choice==1)
		{
			square_area(a);
			printf("%d\n", square_area(a));
			/* code */
		}
		else
		{
			menu(1);
		}



	}
	else
	{
		exit(0);
	}

	return 0;
}



int main(int argc, char const *argv[])
{
	/* code */
	//int a =2;


// i write 1 , it works.
// if It is zero or a another number. you can compile but nothing 's happened.

menu(1);
	
	
	
	/*int c = rectangle_area(2,9);
	printf("area of the rectangle : %d m²\n",c);
	int d = triangle_area(8,3);
	printf("area of the triangle : %d\n m²",d );*/


	return 0;
}