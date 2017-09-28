

#include <stdio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	//taskOne();

	taskTwo();

	//taskThree();

	//taskFour();

//	testFunc();

}


int taskOne() {

	int input;
	do {
		printf("Please, enter an integer: ");
		scanf("%i", &input);

		printf("The number squared is: %i\n", input*input);


	} while(input > 0);

	return 0;
}


int taskTwo() {
	int n;

	while(1) {
		printf("Please type in a value\n");
		scanf("%i", &n);
		if (n < 0) break;
		do {
			printf("%i\n", n%8);
			n /= 8;
			//printf("n is equal to %i\n", n);

			} while (n>0);
	}

	printf("Finished!\n");
	return 0;
}


int taskThree() {
	int n;

		while(1) {
			printf("Please type in a value\n");
			scanf("%i", &n);
			if (n < 0) break;
			do {
				printf("%i\n", n%16);
				n /= 16;
				//printf("n is equal to %i\n", n);

				} while (n>0);
		}

		printf("Finished!\n");
		return 0;
}

int taskFour() {
	int n;
	int base;

		while(1) {
			printf("Please type in a number to be converted\n");
			scanf("%i", &n);
			printf("Please type in a number to be the base\n");
			scanf("%i", &base);
			if (n < 0 || base <= 1) break;
			do {
				printf("%i\n", n%base);
				n /= base;
				//printf("n is equal to %i\n", n);

				} while (n>0);
		}

		printf("Finished!\n");
		return 0;
}


int testFunc() {
//	char ch = 'a';
//	do {
//		printf("%c", ch);
//			ch++;
//	} while( ch < 'e');

//	int n;
//	n = (4>3) ? 1 : 0 ;
//	printf("%i\n",n);


	char lol = getchar();
	printf("%c\n", lol);
	return 0;
}
