



#include <stdio.h>


typedef struct {
	int customerID;
	_Bool isSavings;
	int balance;
	double interestRate;
} account;


int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

//	videoExercise();

	taskOne();

//	taskTwo();

	return 0;
}

int videoExercise() {


	char ch;
	int cID, initialBalance, time;
	_Bool isSavingsAccount;
	double interestRate, mult=1;

	printf("Please type in your customer id:\n");

	scanf("%i", &cID);

	printf("Which account would you want to choose - Savings or Default?\nType in S for Savings account or D for Default:\n");

	do {
//		ch = getchar();

		scanf(" %c", &ch);
//		printf("%c", ch);
		if (ch == 'S' || ch == 'D') break;
		printf("Sorry, didn't get that. Please repeat:\n");
	} while (1);

	if(ch == 'S') {
		isSavingsAccount = 1;
		interestRate = 2;
		printf("Savings account chosen\n");
	}
	else {
		isSavingsAccount = 0;
		interestRate = 1;
		printf("Default account chosen\n");
	}

	printf("What would your initial balance be: \n");

	scanf("%i", &initialBalance);

	printf("What time would you want to wait: \n");

	scanf("%i", &time);

	account userAccount = {.customerID = cID, .isSavings = isSavingsAccount, .balance = initialBalance, .interestRate = interestRate};

	for (int i = 0; i<time; i++) {

		userAccount.balance += (userAccount.interestRate/100)*userAccount.balance;

	}

	printf("You've earned %i\n", userAccount.balance);

	return 0;
}


int taskOne() {

	int advMins, hours, minutes;

	typedef struct {
		int hours;
		int minutes;
		char amORpm;
	} time;

	time now = {.hours = 12, .minutes = 0, .amORpm = 'a'};


	while(1) {

		printf("Right now it is %.2i:%.2i %c\n", now.hours, now.minutes, now.amORpm);

		printf("How many minutes would you want to forward the time:\n");

		scanf("%i", &advMins);

		if (advMins < 0) break;

		hours = advMins / 60;

		minutes = advMins % 60;

		if ((now.minutes + minutes)>=60) {
			hours += (now.minutes + minutes)/60;
			minutes = (now.minutes + minutes)%60;
			now.minutes = 0;
			now.hours = (now.hours+hours)%12;
		}

		if ((now.hours+hours)%24 != 0 && (now.hours + hours)%12 == 0) {
			switch(now.amORpm){
				case 'a':
					now.amORpm = 'p';
					break;
				case 'p':
					now.amORpm = 'a';
					break;
			}
		};

		if ((now.hours + hours) % 12 == 0) now.hours = 12;
		else now.hours = (now.hours+hours)%12;
		now.minutes += minutes;

		printf(" RESULT: Right now it is %.2i:%.2i %c\n", now.hours, now.minutes, now.amORpm);

		now.hours = 12;
		now.minutes = 0;
		now.amORpm = 'a';


	};

	return 0;
}


int taskTwo() {

	typedef struct {
		int ID;
		char gender;
		double labGrades, qGrades, fexamGrade, finalGrade;

	} student;

	student nuStudent;

	printf("What is your ID number?\n");

	scanf("%i", &nuStudent.ID);

	printf("What is your gender? Type in M for male and F for Female\n");

	scanf(" %c", &nuStudent.gender);

	printf("What is your total grade for labs?\n");

	scanf("%lf", &nuStudent.labGrades);

	printf("What is your total grade for quizzes?\n");

	scanf("%lf", &nuStudent.qGrades);

	printf("What is your grade for final exam?\n");

	scanf("%lf", &nuStudent.fexamGrade);

	nuStudent.finalGrade = nuStudent.labGrades*0.2 + nuStudent.qGrades*0.5 + nuStudent.fexamGrade*0.3;

	printf("Student %i, your final grade is %lf", nuStudent.ID, nuStudent.finalGrade);

	return 0;
}
