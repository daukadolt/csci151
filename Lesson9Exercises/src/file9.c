

#include <stdio.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	//taskOne();
	//taskTwo();
	taskThree();
	return 0;
}


int taskOne() {
	double g;
	printf("What is the numerical value of your grade: ");
	scanf("%lf", &g);

	printf("A hell lot of useless code needed, will finish this one later\n");

	return 0;
}


int taskTwo() {
	int n, i = 2;
	printf("Please, type in an integer\n");
	scanf("%i", &n);

	while(i<n) {
		if (n % i == 0) printf("Found it! The number is: %i\n", i);
		i++;
	}

	printf("Finished!\n");
	return 0;
}


int taskThree() {
	int d;
	const char* out[10];
	printf("Welcome to the year 2016!\nPlease, type in a day:\n");
	scanf("%i", &d);

	if (d>=1 && d<=366) {
		switch((d+4)%7) {
			case(0): out[0]="Sunday"; break;
			case(1): out[0]="Monday"; break;
			case(2): out[0]="Tuesday"; break;
			case(3): out[0]="Wednesday"; break;
			case(4): out[0]="Thursday"; break;
			case(5): out[0]="Friday"; break;
			case(6): out[0]="Saturday"; break;
		}

	if(d<=31){ out[1]="January"; d -= 0;}
	else if(d<=60){ out[1]="February"; d -= 31;}
	else if(d<=91){ out[1]="March"; d -= 60;}
	else if(d<=121){ out[1]="April"; d -= 91;}
	else if(d<=152){ out[1]="May";  d -= 121;}
	else if(d<=182){ out[1]="June"; d -= 152;}
	else if(d<=213){ out[1]="July"; d -= 182; }
	else if(d<=244){ out[1]="August"; d -= 213; }
	else if(d<=274){ out[1]="September"; d -= 244; }
	else if(d<=305){ out[1]="October"; d -= 274; }
	else if(d<=335){ out[1]="November"; d -= 305; }
	else if(d<=366){ out[1]="December"; d -= 335; }

	printf("It is %s, %s %i/nd/th/whatever", out[0], out[1], d);
	} else {
		printf("Invalid input. Sorry, you're thru\n");
	}


//	printf("The date is %s, %s",out[0], out[1]);

	return 0;
}
