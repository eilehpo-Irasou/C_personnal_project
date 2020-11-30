#include "all_functions.h"

/*
Formulas for volumes :
- cube
-

/* side*side*side */

double volum_cube(double side)
{
	double volum = 0 ;
	volum = (cube)*cube*(cube);
	return volum ;
}

// L = length ; l = width ; h = height; 

double volum_parallelepiped(double length , double width, double height)
{
	double volum = 0;
	volum = length*width*height;
	return volum ;
}

double volum_cylinder(double radius, double height)
{
	double volum = 0;
	volum = (radius*(M_PI))*height;
	return volum;
}

double volum_cone(double area_base, double height)
{
	double volum = 0;
	volum = (1/3)*area_base*height;
	return volum;
}

double volum_sphere(double radius)
{
	double = 0;
	volum = (4/3)*(M_PI)*((radius*radius*radius));
	return volum;
}

int main(int argc, char const *argv[])
{
	/* code */
	
	return 0;
}





