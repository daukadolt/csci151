#include <stdio.h>
#include <math.h>

double expApprox(double, int);

int nFactorial(int);

double sinApprox(double, int);

void clockOutput();

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


void clockOutput() {
	int hours, mins, secs;
	printf("Now is 12:00:00 AM\n. How many seconds would you love to forward the time?\n");
	scanf("%i", &secs);

	mins = secs/60;

	secs = secs%60;

	hours = (mins/60)%24;

	mins %= 60;

//	if (hours != 0) mins -= hours*60;
//	else mins %= 60;

	printf("%.2i:%.2i:%.2i\n",hours, mins, secs);

}

int nFactorial(int n) {

	if (n == 1 || n == 0) return 1;

	for (int i = n-1; i>0; i--) {
		n *= i;
	}

	return n;
}
