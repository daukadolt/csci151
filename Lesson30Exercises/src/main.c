
#include <stdio.h>

//#include "secondtask.h"

#define num_labs 6
#define num_quizzes 6
#define DROP_LOWEST_QUIZ 1

void first_task() {
	double holder = 0,
			lab_sum = 0, quiz_sum = 0,
			final = 0, lab_total = 12,
			quiz_total = 90, final_total = 100, min;

	double* quizzes;

	for(int i = 0; i< num_labs; i++) {
		printf("Grade for the %i lab:", i+1);
		scanf("%lf", &holder);
		lab_sum += holder;
	}

	holder = 0;

	for(int i = 0; i < num_quizzes; i++) {
		printf("Grade for the %i quiz:", i+1);
		scanf("%lf", quizzes+i);
		quiz_sum += *(quizzes+i);
	}

//	printf("%lf\n", quiz_sum/quiz_total);

	if(DROP_LOWEST_QUIZ) {
		printf("Good news! A quiz with the lowest grade will be dropped!\n");
		min = *quizzes;
		for(int i = 0; i<num_labs; i++) {
			if(*(quizzes+i)<min) min = *(quizzes+i);
		}
		quiz_sum -= min;
		quiz_total -= 15;
	}

//	printf("%lf\n", quiz_sum/quiz_total);



	printf("What is your score on final in percents:");
	scanf("%lf", &final);

//	printf("Final %lf\n", final/final_total);

	printf("Your grade percentage is %lf\n", 20*(lab_sum/lab_total) + 50*(quiz_sum/quiz_total) + 30*(final/final_total));

}

#define array_size 10
#define isInt 0

#if isInt
	#define ELEMENT_TYPE int
#else
	#define ELEMENT_TYPE double
#endif

void second_task() {
	ELEMENT_TYPE array[array_size], min;
	if(isInt) {
	for(int i = 0; i<array_size; i++) {
			printf("[%i]:", i+1);
			scanf("%i", &array[i]);
		}

		min = array[0];

		for(int i = 1; i<array_size; i++) {
			if(min>array[i]) min = array[i];
		}

		printf("Min is %i\n", min);
	} else {
		for(int i = 0; i<array_size; i++) {
			printf("[%i]:", i+1);
			scanf("%lf", &array[i]);
		}

		min = array[0];

		for(int i = 1; i<array_size; i++) {
			if(min>array[i]) min = array[i];
		}

		printf("Min is %lf\n", min);
	}

//	ELEMENT_TYPE* array;
//
//	*array = 1;
//	printf("%i\n", *array);
//	for(int i = 0; i<array_size; i++) {
//		printf("[%i]:", i+1);
//		scanf("%i", (array+i));
//	}
//
//	for(int i = 0; i<array_size; i++) {
//		printf("[%i]:%i", i, *(array+i));
//	}
}

int main() {

//	first_task();
	second_task();



	return 0;

}
