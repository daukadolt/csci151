#include <stdio.h>
#include <math.h>

#include <string.h>

double expApprox(double, int);

int nFactorial(int);

double sinApprox(double, int);

_Bool isPrime(int);

int sumOfDigits(int);

_Bool isIdeal(int);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);


	printf("Exponent number approx: %lf\n", expApprox(1,30));
//
	printf("Sin value at %.3lf rad approx: %lf\n", 0.523, sinApprox(0.523,15));
//
	printf("Is %i a prime number: %i\n", 31, isPrime(31));
//
	printf("Sum of digits of an integer %i = %i\n", 1010101, sumOfDigits(1010101));

	printf("Is %i an ideal number: %i\n", 28, isIdeal(28));



	/*  Testing prime numbers   */

	printf("\n\n\nTesting prime numbers:\n\n\n");

	FILE *primes;

	primes = fopen("primenumbers.txt", "r");

	int the_p = 0;

	do {

		fscanf(primes, "%i", &the_p);

		printf("Is %i a prime number: %i\n", the_p, isPrime(the_p));

	} while(!feof(primes));

	fclose(primes);


	/*          END           */

	return 0;

}

double expApprox(double x, int n) {

	double sum = 0;

	for (int i = 0; i<= n; i++) {
		sum += (pow(x,i)/nFactorial(i));
	}

	return sum;
}


double sinApprox(double x, int n) {

	double sum = 0;

	int j = 0;

//	x *= 180/M_PI;

	for (int i = 1; j<n; i+=2, j++) {
		if(j%2 == 0){
//			printf("+");
			sum += (pow(x,i)/nFactorial(i));
			continue;
		}
		sum -= (pow(x,i)/nFactorial(i));
//		printf("-");
	}

	return sum;
}


_Bool isPrime(int n) {
	if (n<1) return 0;
	for (int i = 2; i<n; i++) {
		if(n%i == 0) return 0;
	}
	return 1;
}

int sumOfDigits(int n) {
	int sum = 0;
	int rem;
	while(1) {
		if(n == 0) break;
		rem = (n%10);
		n = n/10;
		sum = sum + rem;
	};

	return sum;
}

_Bool isIdeal(int n) {

	int sum = 0, i = 1;

	for (; i<=(n/2); i++) {
		if(n%i==0){
			sum+=i;
		}
	};
	if(sum == n) return 1;

	return 0;

}

int nFactorial(int n) {

	if (n == 1 || n == 0) return 1;

	for (int i = n-1; i>0; i--) {
		n *= i;
	}

//	n *= nFactorial(n-1);

	return n;
}
