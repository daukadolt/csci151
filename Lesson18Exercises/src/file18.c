


#include <stdio.h>


double power(double, int);

double power_eff(double, int);


int main() {

	printf("%lf\n", power(2,-1));

	printf("%lf\n", power_eff(2, -7));
	return 0;
}


double power(double x, int n) {

	// Solution 1.a

	printf("%lf to the power of %i\n", x, n);


	if(n>0) return power(x, n-1)*x;
	else if(n<0) return power(x, n+1) * 1/x;
	return 1;

	//

}

double power_eff(double x, int n) {

	_Bool isNegative = 0;
	int k, rem = 0;
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

	return mult;
}
