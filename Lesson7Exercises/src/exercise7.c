#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

//	firstTask();

	//secondTask();

	thirdTask();


	return 0;
}

int firstTask(){
	int first = 0;
	int second = 1;
	int third = 0;
	int n = 2;
	printf("%i\n%i\n", first, second);
	while(n<=20) {
		third = first + second;
		printf("%i\n", third);
		first = second;
		second = third;
		n++;
	}
	return 0;
}

int secondTask() {
	int mult = 1;
	int n = 2;
	int k = 0;
	int j = 0;
	while (mult <= 256) {
		++k;
		mult*=2;
		printf("LOOP: k is %i\n", k);
//		for (j = k; j>0; j--) {
//			mult *= 2;
//		}
//		k++;
	}
	printf("k is %i\n",--k);
}

int thirdTask() {
	double angle = 0;
	int whatever = 0;
	double what = 0;
	for (; angle<= 360; angle += 15) {
//		printf("%i\n", (int) (sin(angle*M_PI/180)*10));
		whatever = (int) (sin(angle*M_PI/180)*10);
		what = (double) whatever;
		what = fabs(what);

//		printf("%lf", what);
		for (; what>=0; what --) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}

