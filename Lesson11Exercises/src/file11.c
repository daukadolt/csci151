

#include <stdio.h>


int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

//	taskOne();

//	taskTwo();

	taskThree();

	return 0;
}

int taskOne() {
	char inputfname[100];
	char ch;
	FILE *inputfile;
	FILE *outputfile;

	printf("What shall be the filename the contents of which we'll copy, mylord?\n");


	scanf("%s", inputfname);
	inputfile = fopen(inputfname, "r");

	if (inputfile == NULL) {
		do {printf("Sorry, no such file found. Please try again\n");scanf("%s", inputfname); inputfile = fopen(inputfname, "r");} while(inputfile == NULL);
	}

	outputfile = fopen("outputfile.txt", "w");

	do {ch = getc(inputfile); fprintf(outputfile, "%c", ch); printf("%c", ch);} while(!feof(inputfile));

	fclose(inputfile);
	fclose(outputfile);
	printf("\n\nFinished copying!\n");

	return 0;
}


int taskTwo() {

	FILE *values;
	FILE *story;

	char value[20];
	char ch;

	story = fopen("story.txt", "r");
	values = fopen("values.txt", "r");

	if (story == NULL || values == NULL) {
		printf("An error has occured, exiting...");
		return 1;
	}

	do {

		ch = getc(story);

		if (ch == '$') {
			fscanf(values, "%s", value);
			printf("%s", value);
			continue;
		}

		putchar(ch);

	} while(!feof(story));

	return 0;
}


int taskThree() {

	char outputfname[20];

	printf("Welcome to the Middle Earth! What shall our story.txt be called?\n");

	scanf("%s", outputfname);

	FILE *values;
	FILE *story;
	FILE *personalstory;

	char value[20];
	char ch;

	story = fopen("story.txt", "r");
	values = fopen("values.txt", "r");
	personalstory = fopen(outputfname, "w");

	if (story == NULL || values == NULL || personalstory == NULL) {
		printf("An error has occured, exiting...");
		return 1;
	}

	do {

		ch = getc(story);

		if (ch == '$') {
			fscanf(values, "%s", value);
			fprintf(personalstory, "%s", value);
			printf("%s", value);
			continue;
		}

		fputc(ch, personalstory);
		putchar(ch);

	} while(!feof(story));

	fclose(story);
	fclose(values);
	fclose(personalstory);

	return 0;
}
