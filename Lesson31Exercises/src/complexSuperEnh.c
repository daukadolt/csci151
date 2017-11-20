#include "complex.h"

complex 	conjugate(complex x) {

	x.im = -x.im;

	return x;

}

complex multiply(complex x, complex y) {

	complex result;

	result.im = x.im * y.re + x.re * y.im;
	result.re = x.re * y.re - x.im * y.im;

	return result;

}

complex divide(complex x, complex y) {

	double a = x.re, b = x.im, c = y.re, d = y.im;

	complex result;

	result.re = (a*c + b*d)/(c*c + d*d);
	result.im = (b*c - a*d)/(c*c + d*d);

	return result;

}
