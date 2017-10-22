


#include <stdio.h>

#include <time.h>

void testfunc(double, int);

double power(double, int);

double power_eff(double, int);

int addSubarray(int[], int, int);

double minValue(double[], int, int);

void printBinary(int);

//double choose(double, double);

long choose(int, int);

int main() {

	testfunc(5, 10);

	printf("%lf\n", power_eff(5, 10));

	int x[] = {1,2,3,4};

	printf("%i\n", addSubarray(x, 0, 3));

	double test[] = {1,2,0.5,4,5};

	printf("%lf\n", minValue(test, 0, 4));

	printBinary(9);

//	printf("\n%lf\n", choose(52,5));

	printf("\n%ld\n", choose(52,5));

	return 0;
}


double power(double x, int n) {

	// Solution 1.a

//	printf("%lf to the power of %i\n", x, n);


	if(n>0) return power(x, n-1)*x;
	else if(n<0) return power(x, n+1) * 1/x;
	return 1;

	//

}

double power_eff(double x, int n) {

	clock_t begin = clock();

	_Bool isNegative = 0;
	int k = 1, rem = 0;
	double w = 1, mult = 1;
	if((n>0 && n<=2) || (n<0 && n>=-2)) {
		return power(x, n);
	}

	if(n>0) {k = n/2; rem = n - 2*k;}
	else if(n<0) {k = -n/2; rem = -(n+2*k); isNegative = 1; n = -n;};


	w = power(x, k);

	for(int i = 1; i<=2; i++) {
		mult *= w;
	}

	mult *= power(x, rem);

	if(isNegative) return 1/mult;

	clock_t end = clock();

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("The function elapsed in %lf\n", time_spent);

	return mult;
}


void testfunc(double x, int n) {

	clock_t begin = clock();

	double kek = power(x, n);

	clock_t end = clock();

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("The function elapsed in %lf\n", time_spent);

	printf("%lf\n", kek);
}

int addSubarray(int x[], int from, int to) {
	if(from==to) return x[to];
	return x[from] + addSubarray(x, from+1, to);

}

double minValue(double arr[], int from, int to) {

	printf("from: %i\n", from);

	if(from == to) {
		if(arr[to]<arr[to-1]) return arr[to];
		return arr[to-1];
	}

	if(from>=1) {
		if (arr[from-1] < arr[from]) arr[from] = arr[from-1];
	}
//	printf("%lf ", arr[from]);
	return minValue(arr, from+1, to);
}

void printBinary(int n) {
	if(n==0) return;

	printf("%i", n%2);

	printBinary(n/2);

}


long choose(int n, int k) {
	if(k==0) return 1;
//	printf("k: %i\n", k);
	return ((n-k+1)/(k))*choose(n, k-1);
}
