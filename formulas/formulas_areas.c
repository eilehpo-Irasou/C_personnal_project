#include "all_functions.h"
/*** Formulas for areas
- square
- rectangle
- triangle
- losange
- trapeze
- regular polygon
- circle
- cone
- sphere
*/



double square_area(double side)
{
	double area = 0;
	area = side*side;
	return area;
}

double rectangle_area(double length, double width)
{
	double area = 0;
	area = length * width;
	return area;

}

double triangle_area(double base,double height)
{
	double area = 0 ; 
	area = (base*height)/2;
	return area;
}

double losange_area(double bigD, double littleD)
{
	double area = 0 ; 
	area = (bigD*littleD)/2;
	return area;
}

double trapeze_area(double bigbase, double littlebase, double height )
{
	double area = 0;
	area = ((bigbase+littlebase)/2);
	return area ;
}

double regular_polygon(double perimeter, double apothem)
{
	double area = 0;
	area = (perimeter/2)*apothem;
	return area ;
}

double circle_area(double radius)
{
	double area = 0;
	area = (M_PI)*(radius*radius);
	return area;

}

double cone_area(double radius, double slang_height)
{
	double area = 0 ; 
	area = (M_PI)*radius*slang_height;
	return area ;
}

double sphere_area(double radius)
{
	double area = 0;
	area = 4*(M_PI)*(radius*radius);
	return area ;
}


/*
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
*/


int main(int argc, char const *argv[])
{
	/* code */
	//int a =2;


// i write 1 , it works.
// if It is zero or a another number. you can compile but nothing 's happened.

//menu(1);
	printf("area of circle %.10f m²\n", circle_area(4) );
	
	
	/*int c = rectangle_area(2,9);
	printf("area of the rectangle : %d m²\n",c);
	int d = triangle_area(8,3);
	printf("area of the triangle : %d\n m²",d );*/


	return 0;
}