
#include <stdio.h>


typedef struct {
		int r, g, b;
	} Color;


	typedef struct {
		int x, y;
	} Coords;



int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

//	taskOne();

//	taskTwo();

	taskThree();

	return 0;
}


int taskOne() {


	typedef struct {
		Coords upper_left_corner;
		int side_length;
		Color outline_color;
		Color fill_color;
	} Square;

	typedef struct {
		Coords upper_left_corner, lower_right_corner;
		Color outline_color;
		Color fill_color;
	} Rectangle;


	Square square = { {16,16}, 4, {83, 84, 117}, {255, 255, 255} };

	Rectangle rectangle = { {0, 4}, {8, 0}, {0, 0, 0}, {100, 255, 255} };

	printf("LOL %i, %i\n", square.fill_color.r, rectangle.lower_right_corner.y);

	return 0;
}


int taskTwo() {

	typedef struct {

		Color color;

		Coords coords[5];

	} Pentagon;

	FILE *input;

	input = fopen("pentagon.txt", "r");

	Pentagon pentagon;

//	fscanf("%i %i %i", test.r, test.g, test.b);

//	fscanf(input, "%i %i %i %i %i %i %i %i %i %i %i %i %i", pentagon.color.r, pentagon.color.g, pentagon.color.b);

	fscanf(input, "%i %i %i", &pentagon.color.r, &pentagon.color.g, &pentagon.color.b);


	for (int i = 0; i<5; i++) {
		fscanf(input,"%i %i", &pentagon.coords[i].x, &pentagon.coords[i].y);
	}

	printf("%i\n", pentagon.coords[1].x);

	fclose(input);

	return 0;
}


int taskThree() {

	int i = 10,
			sum_c = 0, n_c = 0,
			sum_s = 0, n_s = 0,
			sum_d = 0, n_d = 0;
	FILE *accounts;

	accounts = fopen("accounts.txt", "r");

	typedef struct {
		int cID;
		char typeC;
		double balance;
	} BankCustomer;


	BankCustomer DauletBank[10];

	for (i = 0; i<10; i++) {
		fscanf(accounts, "%i %c %lf", &DauletBank[i].cID, &DauletBank[i].typeC, &DauletBank[i].balance);
		switch(DauletBank[i].typeC) {
		case 'c': sum_c+=DauletBank[i].balance; n_c++; break;
		case 's': sum_s+=DauletBank[i].balance; n_s++; break;
		case 'd': sum_d+=DauletBank[i].balance; n_d++; break;
		}
	}

	printf("Average values:\n");
	printf("Checking accounts:\t%i\n", sum_c/n_c);
	printf("Savings accounts:\t%i\n", sum_s/n_s);
	printf("Deposit accounts:\t%i\n", sum_d/n_d);

	return 0;
}
