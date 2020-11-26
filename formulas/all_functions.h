#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Area for squares : side*side */
double square_area(double side);

/* Area for rectangles : length*width */
double rectangle_area(double length, double width);

/* Area for triangles : (base*height)/2 */
double triangle_area(double base,double height);

/* Area for losanges : (bigD*littleD)/2 */
double losange_area(double bigD, double littleD);

/* Area for trapezes : ((bigbase+littlebase)/2)*height */
double trapeze_area(double bigbase, double littlebase, double height );

/* Area for regular polygons :  (perimeter/2)*apothem */
double regular_polygon(double perimeter, double apothem);

/* Area for circles : (M_PI)*(radius*radius) */
double circle_area(double radius);

/* Area for cones : (M_PI)*radius*slang_height */ 
double cone_area(double radius, double slang_height) ;

/* Area for spheres : 4*(M_PI)*(radius*radius); */
double sphere_area(double radius);
