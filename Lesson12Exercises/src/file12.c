


#include <stdio.h>

#include <stdlib.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

//	taskOne();

	taskTwo();

	return 0;
}


int taskOne() {
	int facts[10];
	int i = 1, mult = 1;

	for (; i<=10; i++) {
		facts[i-1] = mult;
		mult *= i;
	}

	for (int j = 0; j<10; j++) {
		printf("Cell #%i: %i\n", j+1 , facts[j]);
	}
	return 0;
}


int taskTwo() {

	int thearr[20];

	int min = 100, max = 0, sum = 0;

	for (int i = 0; i < 20; i++) {
		thearr[i] = ( rand() % 51 ) + 50;
		if (thearr[i] > max) max = thearr[i];
		if (thearr[i] < min) min = thearr[i];
		sum += thearr[i];
	}

	for (int j = 0; j<20; j++) {
		printf("Cell #%i: %i\n", j+1 , thearr[j]);
	}

	printf("Min: %i, Max: %i, Average: %g\n", min, max, (double) sum/20);

	return 0;
}
