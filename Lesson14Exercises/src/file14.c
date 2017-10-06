



#include <stdio.h>


typedef struct {
	int customerID;
	_Bool isSavings;
	int balance;
	double interestRate;
} account;


int main() {

	videoExercise();

	return 0;
}

int videoExercise() {
	setvbuf(stdout, NULL, _IONBF, 0);

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

}
