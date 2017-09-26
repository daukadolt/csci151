

#include <stdio.h>

#include <math.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	//FirstTask - Quadratic equation

	double a;
	double b;
	double c;

	double disc;

	printf("Please type in the value for a\n");
	scanf("%lf", &a);

	printf("Please type in the value for b\n");
	scanf("%lf", &b);

	printf("Please type in the value for c\n");
	scanf("%lf", &c);

	disc = sqrt( pow(b,2) - 4*a*c );

	printf("The roots of the quadratic equation with given roots are: \n");

	printf("x1:\t %g\n", (-b+disc)/(2*a));
	printf("x2:\t %g\n", (-b-disc)/(2*a));



	//TaskTwo

	double x;

	double y;

	printf("\n\nTaylor expansion\n\n Please type in a value of X\n");

	scanf("%lf", &x);

	y = x * M_PI/180;

	printf("The approximation is:\t %g\n", y - ( pow(y,3)/6 ) + ( pow(y,5)/120 ) );

	//



}



int factorial(int the_input) {

	if(the_input == 0) return 1;
	return (the_input * factorial(the_input - 1));
}
