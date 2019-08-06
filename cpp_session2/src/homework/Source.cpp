#include <iostream>

using namespace std;

/*
	Please feel free to add more functions to your
	code if you would like to test out more of the
	questions.  Make sure to keep the new functions
	above the main() function and then to reference
	them back in the main function.  It is also
	recommended to comment out functions you are
	not using to more accurately test out your
	code.
*/


void question1() {
	int test = 70000;
	long a = 70000;
	float b = 70000;

	cout << test<< ", "<< a << ", " << b << endl;
}

void question2() {

	cout << "Question 2: its a trap!" << endl;
}

void question3() {
	cout << "its is signed its got a negitive sign" << endl;
}

void question4() {
	// this was unsigned and made the value wrap around when it went into the negitive
	unsigned int balance = 2754;

	unsigned int rent = 2000;
	unsigned int carPayment = 400;
	unsigned int groceries = 400;
	unsigned int otherSupplies = 200;

	balance -= rent;
	balance -= carPayment;
	balance -= groceries;
	balance -= otherSupplies;

	cout << "Remaining Balance: " << balance << endl;
}

void question5() {
	// this was unsigned and made the value wrap around when it went into the negitive
	int balance = 2754;

	unsigned int rent = 2000;
	unsigned int carPayment = 400;
	unsigned int groceries = 400;
	unsigned int otherSupplies = 200;

	balance -= rent;
	balance -= carPayment;
	balance -= groceries;
	balance -= otherSupplies;

	cout << "Remaining Balance: " << balance << endl;
}

void question6() {
	cout << "97" <<endl;
}

void question7() {
	cout << "a" << endl;
}

void question8() {
	cout << "20 because when multiplied 20.8 and stored in an int only store the things before the decimal" << endl;
}

void question9() {
	cout << "21" << endl;
}

void question10() {
	int salary = 70000;
	unsigned int age = 42;
	double humanPopulation = 7600000000;
	float pi = 3.14159;
	char gender = 'f';
	int IQ = 127;
	int hasApples = true;
	int mathTime = (12 + 13) *(6 - 7) / 5;

	cout << "I make $" << salary << " per year" << endl;
	cout << "I am " << age << " years old" << endl;
	cout << "There are " << humanPopulation << " people on this planet" << endl;
	cout << "The value of pi is " << pi << endl;
	cout << "My gender us: " << gender << endl;
	cout << "My IQ is: " << IQ << endl;
	cout << "1 means I have apples! Having apples = " << hasApples << endl;
	cout << "(12 + 13) *(6 - 7) / 5 = " << mathTime << endl;
}

int main() {
	question1();
	question2();
	question3();
	question4();
	question5();
	question6();
	question7();
	question8();
	question9();
	question10();
	return 0;
}