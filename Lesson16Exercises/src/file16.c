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

	printf("%lf\n", expApprox(1,30));

	printf("%lf\n", sinApprox(0.523,3));

	printf("%i\n", isPrime(6));

	printf("%i\n", sumOfDigits(1000));

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

	for (int i = 1; i<=n; i+=2, j++) {
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
	if (n<=1) return 0;
	return (n%2==0);
}

int sumOfDigits(int n) {
	int sum = 0;

	return sum;
}

_Bool isIdeal(int n) {

	int sum = 0, divisors[100];

	return 1;

}

int nFactorial(int n) {

	if (n == 1 || n == 0) return 1;

	for (int i = n-1; i>0; i--) {
		n *= i;
	}

	return n;
}
