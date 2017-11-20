#include <stdio.h>
#include "complex.h"
#include "complexEnh.h"
#include "complexSuperEnh.h"

int main() {

	complex x = {1.0, 2.0};
	complex y = {2.5, 3.0};

	complex z = add(x, y);
	print(z);
	z = norm(z);
	print(z);

	z = conjugate(x);
	print(z);
	z = multiply(x, y);
	print(z);
	z = divide(x, y);
	print(z);

	return 0;
}
