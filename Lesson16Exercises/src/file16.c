#include <stdio.h>
#include <math.h>

double expApprox(double, int);

int nFactorial(int);

double sinApprox(double, int);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("%lf\n", expApprox(1,30));

	printf("%lf\n", sinApprox(0.523,3));

	clockOutput();

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


int nFactorial(int n) {

	if (n == 1 || n == 0) return 1;

	for (int i = n-1; i>0; i--) {
		n *= i;
	}

	return n;
}
