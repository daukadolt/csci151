
#include <stdio.h>

int charCount(char, char[]);

void stringCopy(char[], char[]);

_Bool areEqual(char[], char[]);

void reverse(char[], char[]);

void concat(char[], char[], char[]);

void printContents(char[]);

int main() {

//	printf("%i\n", charCount('C', "Carpe diem "
//			"Seize the day "
//			"Gather your rosebuds "
//			"While ye may"));
//
//	char to[100] = "Change me";
//	char from[100] = "Ok, I will";
//
//	printf("-%s\n-%s\n", to, from);
//	stringCopy(from, to);
//	printf("-%s\n-%s\n", to, from);

	/* Equality test */

//	char test1[100];
//	char test2[100];
//	printf("Equality test\n");
//	printf("Text 1:");
//	scanf("%s", test1);
//	printf("Text 2:");
//	scanf("%s", test2);
//	printf("%i\n", areEqual(test1, test2));

	/* End */

	/* Reverse */

	char textToReverse[100];
	char placeToSave[100];

	printf("Reverse the text\n");
	printf("The text:");
	scanf("%s", textToReverse);
//	printf("Text 2:");
//	scanf("%s", test2);

	reverse(textToReverse, placeToSave);


	printf("%s\n%s\n", textToReverse, placeToSave); //Multi-string, check how to


	/* End */


	/* Concat */

//	char testim1[100];
//	char testim2[100];
//
//	printf("Concat\n");
//
//	printf("text 1:");
//	scanf("%s", testim1);
//
//	printf("text 2:");
//
//	scanf("%s", testim2);
//
//	char resultHolder[100];
//
//	concat(testim1, testim2, resultHolder);
//
//	printf("%s\n%s\n%s\n", testim1, testim2, resultHolder);

	/* End */


	return 0;
}

void printContents(char str[]) {
	int i = 0;

//	do {
//		printf("#%i: %c\n", i, str[i]);
//		i++;
//	} while(str[i]!='\0');

//	for(i = 0; i<100; i++) {
//		printf("#%i: %c\n", i, str[i]);
//	}
//	i++;
//	printf("#%i: %c\n", i, str[i]);
//	printf("KEK");
}


int charCount(char ch, char str[]) {

	int i = 0, occ=0;

	do {
		if(str[i] == '\0') break;
		if(str[i] == ch) occ++;
		i++;
	} while(1);

	return occ;
}

void stringCopy(char fromStr[], char toStr[]) {
	int i=0;

	do {
		toStr[i] = fromStr[i];
		i++;
	}
	while(fromStr[i] != '\0');

}


_Bool areEqual(char str1[], char str2[]) {
	for(int i=0; ;i++){
		if(str1[i]=='\0' && str2[i]!='\0') return 0;
		if(str2[i]=='\0' && str1[i]!='\0') return 0;
		if(str2[i]=='\0' && str1[i]=='\0') break;
		if(str1[i] != str2[i]) return 0;
	}
	return 1;
}


// Number 3

void reverse(char fromStr[], char toStr[]) {

	int i = 0;

	while(fromStr[i] != '\0'){
		i++;
	}

	char holder[i];

	int j = i-1;

	for(; i>-1; i--) {
		holder[j-i] = fromStr[i];
	}

	stringCopy(holder, toStr);


}



//


void concat(char str1[], char str2[], char ResultStr[]) {
	int i = 0;
	for(i = 0; ;i++) {
		if(str1[i]=='\0') break;
		ResultStr[i] = str1[i];
	}

	for(int j = 0; ; j++, i++) {
		if(str1[j]=='\0') break;
		ResultStr[i] = str2[j];
	}
}
