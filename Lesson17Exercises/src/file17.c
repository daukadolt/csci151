

#include <stdio.h>

#include <stdlib.h>


int smallestDouble(int, double[]);

double maxVal(int len, double[][len]);

void printContents(int, double[]);

void reverseArray(int, double[]);

void transpose(int row, int col, double orig[][col], double result[][row]);

void populateArray(int row, int col, double arr[][col]);

void printArrContents(int row, int col, double arr[][col]);


int main() {

	double test1[] = {1,2,0.5,4,5};
	double test2[][5] = {
			{1,2,3,4,5},
			{6,7,8,9,10},
			{11,12,13,14,15},
			{16,17,18,19,20},
			{21,22,23,24,25}
	};

	printf("Index of smallest value: %i\n", smallestDouble(5,test1));

	printf("\n\n\n");

	printf("Max val: %.3lf\n", maxVal(5, test2));

	printf("\n\n\n");

	printContents(5, test1);

	printf("\n");

	reverseArray(5, test1);

	printContents(5, test1);

	printf("\n\n\n");

	double arr1[3][2], arr2[2][3];

	populateArray(3, 2, arr1);

	printArrContents(3, 2, arr1);

	printf("Transpose \n\n\n");

	transpose(3, 2, arr1, arr2);

	printArrContents(2, 3, arr2);

	return 0;
}

/*  Exercise 1 */
int smallestDouble(int size, double arr[]){
	int n = 0;
	double min = arr[0];
	for (int i = 1; i<size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			n = i;
		}
	}

	return n;
}

/*     END     */


/*  Exercise 2 */

double maxVal(int len, double orig[][len]) {

	int x = 0, y = 0;

	double max = orig[0][0];

	for (int j = 1; j<len; j++) {
		for (int i = 1; i<len; i++) {
			if(orig[j][i] > max) {
				x = i;
				y = j;
				max = orig[j][i];
			}
		}
	}

	return max;

}

/*     END     */


/*  Exercise 3 */

void printContents(int size, double arr[]) {
	for (int i = 0; i<size; i++) {
		printf("Element #%i: %.2lf\n", i+1, arr[i]);
	}
}


void reverseArray(int size, double arr[]) {


	double copy[size];

	for(int i = 0; i<size; i++) {
		copy[i] = arr[size-i-1];
	}

	for (int i = 0; i<size; i++) {
		arr[i] = copy[i];
	}

}

/*     END     */



/*  Exercise 4 */


void populateArray(int row, int col, double arr[][col]) {

	for (int j = 0; j<row; j++) {
		for (int i = 0; i<col; i++) {
			arr[j][i] = rand()%10;
		}
	}

}

void printArrContents(int row, int col, double arr[][col]) {

	for (int j = 0; j<row; j++) {
		for (int i = 0; i<col; i++) {
			printf("%.2lf\t", arr[j][i]);
		}
		printf("\n");
	}

}


void transpose(int row, int col, double orig[][col], double result[][row]){


	for (int i = 0; i<col; i++) {
		for (int j = 0; j< row; j++) {
			result[i][j] = orig[j][i];
		}
	}

}


/*     END     */
