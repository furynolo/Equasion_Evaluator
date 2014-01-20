/* Joel Wadagnolo
 * CptS 121
 * Programming Assignment 1
 * 01/27/10
 * This program will evaluate different equations
 * based on the given input from the user for the
 * values of the variables */

#include <stdio.h>
int main (void)
{
	// PI is a number used when dealing with circles or spheres
	int current = 0, resistance = 0, voltage = 0, power = 0, x = 0, y = 0, a = 0, b = 0, c = 0, d = 0;
	double circumference = 0.0, PI = 3.141590, radius = 0.0, height = 0.0, volume = 0.0, area = 0.0, x2 = 0.0, z = 0.0, y2 = 0.0;

	printf("*************** WELCOME TO THE EQUATION EVALUATOR ***************\n\n");

	printf ("Please enter 2 integer values (I and R) for use in Ohm's Law: ");
	scanf ("%d%d", &current, &resistance); // voltage equals current times resistance
	voltage = current * resistance; // voltage = v, current = I, resistance = R
	printf ("Ohm's Law: V = I * R = %d * %d =  %d\n\n", current, resistance, voltage);

	printf ("Please enter 2 integer values (V and R) for use in Joule's Law: ");
	scanf ("%d%d", &voltage, &resistance); // power equals voltage squared divided by resistance
	power = (voltage * voltage) / resistance; // power = P, voltage = V, resistance = R
	printf ("Joule's Law: P = (V^2) / R = %d^2 / %d = %d\n\n", voltage, resistance, power);

	printf ("Please enter 5 integer values (x, a, b, c, and d)\n for use in a third order polynomial equation: ");
	scanf ("%d%d%d%d%d", &x, &a, &b, &c, &d); // the variable y is the outcome of multiplying 3 by a times x cubed plus one fourth (1/4 in int. division is zero so used float) multiplied by b times x squared plus ten times c times x plus negative five times d
	y = 3 * a * x * x * x + (1.0/4.0) * b * x * x + 10 * c * x + (-5) * d; /* y is the outcome of the given equation. x, a, b, c, and d are arbitrary integer variables */
	printf ("third order polynomial equation: y = 3ax^3 + (1/4) * bx^2 + 10cx + (-5)d \n= 3 * %d * %d^3 + (1/4) * %d * %d^2 + 10 * %d * %d + (-5) * %d = %d\n\n", a, x, b, x, c, x, d, y);

	printf ("Please enter 1 floating-point value (radius)\n for use in a circumference of circle equation: ");
	scanf ("%lf", &radius); // the circumference of a circle equals two times pi times the radius
	circumference = 2 * PI * radius; // circumference is the distance around a circle, radius = distance from center of circle to edge
	printf ("circumference of circle: circumference = 2 * PI * radius = 2 * 3.141590 * %lf = %lf\n\n", radius, circumference);

	printf ("Please enter 2 floating-point values (radius and height) for use in a volume of cone equation: ");
	scanf ("%lf%lf", &radius, &height); // height is the distance from the center of the base of the cone to the tip of the cone
	volume = (1.0/3.0) * PI * radius * radius * height; // volume is the space inside of a cone, radius is the distance from the center of the base of the cone to the edge of the base of the cone
	printf ("volume of a cone: volume_cone = 1/3 * PI * radius^2 * height = 0.333333 * 3.141590 * %lf^2 * %lf = %lf\n\n", radius, height, volume);
												// the volume of a cone is calculated by multiplying, the float, one third by pi and by radius squared times the height
	printf ("Please enter 2 floating-point values (radius and height) for use in an area of cylinder equation: ");
	scanf ("%lf%lf", &radius, &height); // height is the distance from the base to the top of the cylinder, radius is the distance from the base of the cylinder to the edge of the base
	area = 2 * PI * radius * radius + 2 * PI * radius * height; // area is the sum of the surface area of the side of the cylinder and two times the base of the cylinder
	printf ("surface area of a cylinder: area_cylinder = 2 * PI * radius^2 + 2 * PI * radius * height = 2 * 3.141590 * %lf^2 + 2 * 3.141590 * %lf * %lf = %lf\n\n", radius, radius, height, area);
												// to calculate the surface area you multiply the area of the base by the curcumference of the base times the height
	printf ("Please enter 2 floating-point values (x and z) and two integer values (a and b)\n for use in a general equation: ");
	scanf ("%lf%lf%d%d", &x2, &z, &a, &b); // y (y2) equals, the float, one seventh  times x squared minus 5. times z plus the remainder of a divided by three times b
	y2 = 1.0/7.0 * x2 - (5.5) * z + a % (3 * b); // y (y2) is the outcome of the given equation. x (x2) and z d are arbitrary integer variables, a and b are arbitrary floatnig point variables
	printf ("general equation: y = 1/7 * x - (5.5) * z + a %% (3 * b) = 0.142857 * %lf - (5.5) * %lf + %d %% (3 * %d) = %lf\n\n", x2, z, a, b, y2);

	return 0;
}
