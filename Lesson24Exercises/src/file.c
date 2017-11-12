#include <stdio.h>



void writeln(char letters[]) {

	int i = 0;
	while (letters[i] != '\0') {

		putchar(letters[i]);
		i++;
	}

	putchar('\n');
}

void test1() {
	char arr[] = "abcdef";
	char *ptr = "ghijklmnop";

	writeln(arr);
	writeln(ptr);
	writeln("qrstuv");
}



void stringCopy(char *fromStr, char *toStr) {
	for(; ; *fromStr++, *toStr++) {
//		printf("iterating\n");
		//Gotta write more general code for the case if the "toStr"<"fromStr"
		if(*fromStr == '\0') {*toStr = *fromStr; break;}
		*toStr = *fromStr;
	}
}

_Bool areEqual(char *str1, char *str2) {
	_Bool result = 1;
	for(; ; str1++, str2++) {
//		printf("Testing %c vs %c\n", *str1, *str2);
		if(*str1 == '\0' && *str2 == '\0') {break;}
		if(*str1 != *str2) {result = 0; break;}
	}

	return result;
}

void reverse(char *fromStr, char *toStr) {

	stringCopy(fromStr, toStr);

	int i = 0;

	while(*fromStr != '\0') {
		*fromStr++;
		i++;
	}

	i--;
	*fromStr--;

	while(i>=0) {
//		printf("%c", *fromStr);

		*toStr = *fromStr;
		*toStr++;
		*fromStr--;
		i--;
	}


}

void concatenate(char *str1, char *str2, char *resultStr) {

	stringCopy(str1, resultStr);
	int i = 0;

	while(*resultStr !='\0') {
		i++;
		*resultStr++;
	}

	while(1) {
		if(*str2 == '\0') {
			*resultStr = *str2;
			break;
		}
		*resultStr = *str2;
		*resultStr++;
		*str2++;
	}

}

int main(void) {

	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";

	char result[50];

	// Test code for stringCopy
	stringCopy(word1, result);
	printf("Test 1.1 result: %s\n", result);
	stringCopy(word4, result);
	printf("Test 1.2 result: %s\n", result);
	stringCopy(word3, result);
	printf("Test 1.3 result: %s\n", result);

	// Test code for areEqual
	printf("Test 2.1 result: %i\n", areEqual(word1, word2));
	printf("Test 2.2 result: %i\n", areEqual(word1, word3));
	printf("Test 2.3 result: %i\n", areEqual(word2, word4));
	printf("Test 2.4 result: %i\n", areEqual(word4, word2));

	// Test code for reverse
	reverse(word1, result);
	printf("Test 3.1 result: %s\n", result);
	reverse(word2, result);
	printf("Test 3.2 result: %s\n", result);
	reverse(word3, result);
	printf("Test 3.3 result: %s\n", result);

	// Test code for concatenate
	concatenate(word1, word2, result);
	printf("Test 4.1 result: %s\n", result);
	concatenate(word3, word4, result);
	printf("Test 4.2 result: %s\n", result);
	concatenate(word1, word1, result);
	printf("Test 4.3 result: %s\n", result);

	return 0;
}
