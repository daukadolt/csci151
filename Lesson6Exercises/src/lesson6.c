#include <stdio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

//	// First task
//	printf("Task 1: Celcius to Fahrenheit converter\nCelsius\tFahrenheit\n");
//	for (int x = -50; x<=30; x+=10 ) {
//		printf("%i\t%g\n", x, 1.8*x + 32);
//	}
//	//
//
//	// Task two
//	taskTwo(16);
//	//
//
//	// Task three
//
//	taskThree();
//
//	//
//
//	// Task four
//
//	taskFour(5);
//
//	//
//
//	taskFive();

//	taskSix();

	taskSeven();
}

int taskTwo(int fin) {
	printf("Task 2: 2..4..8..\n");
		int mult = 1;
		for (int n = 1; n<=fin; n++) {
			//mult *= 2;
			printf("%i\n", mult *= 2);
		}
	return 0;
}


int taskThree() {
	int mult = 1;
		printf("\n\n\nTask three\n\n n\t2^n\n");
		printf("________________\n");
		for (int n = 1; n<=16; n++) {
			printf("%i\t%i\n", n, mult *= 2);
		}
	return 0;
}


int taskFour(int num) {
	int x,y,z;

		for (x = num; x>=0; x--) {
			for(y = x; y>0; y--) {
				printf("+");
			}
			for(z = num - x; z>0; z--) {
				printf("*");
			}
			printf("\n");
		}
}

int taskFive() {

	int n, whatever;
	double x, result;

	result = 1;

	printf("Please type in the value for degree n\n");
	scanf("%i", &n);
	printf("Please type in the value for the variable x\n");
	scanf("%lf", &x);

	whatever = n;

	for (; n>0; n--) {
		result *= x;
	}

	printf("%lf to the power of %i = %lf\n", x, whatever, result);


	return 0;
}


int taskSix(int n, double x) {
	double the_x;
	int the_n;
	int whatever = 1;
	double last_value = 1;
	double sum = 0;
	printf("Please enter the value for the n\n");
	scanf("%i", &the_n);
	printf("Please enter the value for the x\n");
	scanf("%lf", &the_x);



	for (; whatever<= the_n; whatever++) {
		last_value *= the_x;
		sum += last_value;
	}

	printf("last value is %lf\n", last_value);
	printf("sum value is %lf\n", sum);

	return 0;
}



int taskSeven() {
	double the_x;
	int the_n;
	int whatever = 1;
	double last_nom = 1;
	double last_denom = 1;
	double sum = 0;
	printf("Please enter the value for the n\n");
	scanf("%i", &the_n);
	printf("Please enter the value for the x\n");
	scanf("%lf", &the_x);


	sum++;
	for (; whatever<= the_n; whatever++) {
			last_nom *= the_x;
			last_denom *= whatever;
			sum += (last_nom/last_denom);
		}

	printf("last value is %lf\n", last_nom/last_denom);
	printf("sum value is %lf\n", sum);

	return 0;
}
