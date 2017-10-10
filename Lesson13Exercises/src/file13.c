


#include <stdio.h>

#include <stdlib.h> // for rand()


int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

//	taskOne();

	taskTwo();

//	taskThree();

//	taskFour();

	return 0;
}


int taskOne() {

	int i = 12, j = 12;

	int table[13][13];

//	printf("Please type in a value for the i variable:\n");
//
//	scanf("%i", &i);
//
//	printf("Please type in a value for the j variable:\n");
//
//	scanf("%i", &j);


	for (; j>=0; j--){
		for (; i>=0; i--) {
			table[i][j] = i*j;
		}
		i = 12;
	}

	for (int y = 0; y < 13; y++) {
		for (int x = 0; x<13; x++) {
			printf("%i\t", table[x][y]);
		}
		printf("\n");

	}

	return 0;
}

int taskTwo() {
	int R = 3, C = 4;
	int a[3][4];
	int b[4][3];

	int i, j, val = 100;

	int x = 3, y = 0;

	/* set matrix elements */
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			a[i][j] = val;
			val++;
		}
	}

	/* print matrix elements */
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");


	for (j = 0; j<4; j++) {
		for (i = 0; i<3; i++) {
			b[j][i] = a[y][x] + 25;
			y++;
		}
		x--;
		y=0;
	}


	for (j = 0; j<4; j++) {
		for (i = 0; i<3; i++) {
			printf("%i\t", b[j][i]);
		}
		printf("\n");
		}


	return 0;
}


int taskThree() {
	int R = 3, C = 4;
	int a[3][4];

	int i, j, val = 100;

	int x = 0, y = 0, max = 0;


	/* set matrix elements */
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			a[i][j] = rand()%100;
		}
	}

	/* print matrix elements */
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			printf("%5d", a[i][j]);
			if (a[i][j] > max) {
				max = a[i][j];
				x = j+1;
				y = i+1;
			}
		}
		printf("\n");
	}

	printf("The maximum number is: %i, it's coordinates are x: %i \t y: %i\n", max, x, y);
	return 0;
}


int taskFour() {

	int a[3][3], b[3][3], c[3][3];

	int i, j, k, sum = 0;

	for (j = 0; j<3; j++) {
		for (i = 0; i<3; i++) {
			a[j][i] = rand()%100;
			b[j][i] = rand()%100;
		}
	}

	printf("Matrix A:\n");

	for (j = 0; j<3; j++) {
		for (i = 0; i<3; i++) {
			printf("%6i", a[j][i]);
		}
		printf("\n");
	}

	printf("Matrix B:\n");

	for (j = 0; j<3; j++) {
		for (i = 0; i<3; i++) {
			printf("%6i", b[j][i]);
		}
		printf("\n");
	}

	printf("Matrix C is:\n");

	k = 0;

	j=0;


	for (j = 0; j<3; j++) {
		for(k = 0; k < 3; k++) {
			for (i=0;i<3;i++) {
				sum+=a[j][i]*b[i][k];
			}
		c[j][k]=sum;
		printf("%i\t", sum);
		sum = 0;
		}
		printf("\n");
	}


	return 0;



	//	c[j][0] = a[j][0]*b[0][j]+a[j][1]*b[1][j]+a[j][2]*b[2][j];
	//	printf("%i\t", c[j][0]);
	//	c[j][1] = a[j][0]*b[0][j+1]+a[j][1]*b[1][j+1]+a[j][2]*b[2][j+1];
	//	printf("%i\t", c[j][1]);
	//	c[j][2] = a[j][0]*b[0][j+2]+a[j][1]*b[1][j+2]+a[j][2]*b[2][j+2];
	//	printf("%i\n", c[j][2]);
	//	c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0]+a[1][2]*b[2][0];
	//	printf("%i\t", c[1][0]);
}
