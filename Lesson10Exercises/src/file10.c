

#include <stdio.h>

int main() {

//	taskOne();

	taskTwo();

//	taskThree();

}


int taskOne() {
	char ch;
	int occ = 0;
	printf("Please, type in a string so that I could process it\n");
	do {
		ch = getchar();
		if (ch == 'a') occ++;
	} while(ch != '\n');

	printf("It appears that the character 'a' has been detected %i times in your input\n", occ);
	return 0;
}


int taskTwo(){
	char ch;
	printf("Please, type in a string so that I could process it\n");
	do {
		ch = getchar();
		if ( (int) ch <= 122 && (int) ch >= 97) {
			printf("%c", (int) ch - 32);
			continue;
		}
		printf("%c", ch);
	} while(ch != '\n');
	return 0;

	//	for (int i = 97; i <=122; i++) {
//		printf("%i %c\n",i-32, i-32);
//	}

	return 0;
}


int taskThree() {
	char ch;
	int occ = 0;
	int max = 0;
	printf("Please, type in a string so that I could process it\n");
	do {
		ch = getchar();
		if ( (int) ch != 32 && ch != '\n' ) occ++;
		else {printf("%i\n", occ); if(occ > max) {max = occ;}; occ = 0;};
	} while(ch != '\n');

	printf("Done.\n");
	printf("Max length detected is equal to %i\n", max);
	return 0;
}
