// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdint>
using namespace std;
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	while (n < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}
	uint64_t result = 1;
	for (int i = 2; i <= n; ++i) {
		result *= i;
	}
	cout << n << "! = ";
	for (int i = 1; i <= n; ++i) {
		cout << i;
		if (i < n) cout << " * ";
	}
	cout << " = " << result << endl;
}
void arithmetic() {
	int start, difference, numElements;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to add each time: ";
	cin >> difference;
	cout << "Enter the number of elements in the series: ";
	cin >> numElements;

	int sum = start;
	cout << start;
	for (int i = 1; i < numElements; ++i) {
		start += difference;
		sum += start;
		cout << " + " << start;
	}
	cout << " = " << sum << endl;
}
void geometric() {
	int start, ratio, numElements;
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to multiply by each time: ";
	cin >> ratio;
	cout << "Enter the number of elements in the series: ";
	cin >> numElements;

	int sum = start;
	cout << start;
	for (int i = 1; i < numElements; ++i) {
		start *= ratio;
		sum += start;
		cout << " + " << start;
	}
	cout << " = " << sum << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		if (choice > 3 || choice < 1) {
			if (choice == 4) {
				cout << "Exiting" << endl;
			}
			else {
				cout << "Please try again." << endl;
			}
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}