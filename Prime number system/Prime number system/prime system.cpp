#include<iostream>

using namespace std;

int main() {
	string choice;

	cout << "Do you want to find a prime number in a range  or check if a specific number is prime or not : ";
	cin >> choice;

	if (choice == "range")
	{
		int num, range;

		cout << "Enter starting number: ";
		cin >> num;
		cout << "Enter last number of range: ";
		cin >> range;

		for (num; num <= range; num++) {
			if (num == 1) {
				continue;
			}
			if (num == 2 || num == 3) {
				cout << num << " ";
			}
			if (num % 2 == 0 || num % 3 == 0) {
				continue;
			}
			else {
				cout << num << " ";
			}
		}

		cout << endl;
	}
	else if (choice == "specific_number") 
	{
		int num;

		cout << "Enter a number to find if it is prime or not: ";
		cin >> num;
		bool isPrime = true;

		if (num == 2 || num == 3) {
			isPrime = true;
		}
		else if (num == 1 || num == 0) {
			isPrime = false;
		}
		else {
			for (int i = 2; i <= num; i++) {
				if (num % i == 0) {
					isPrime = false;
					break;
				}
			}
		}

		if (isPrime) {
			cout << num << " is a prime number.\n";
		}
		else if (isPrime == false) {
			cout << num << " is not a prime number.\n";
		}
	}
	else
	{
		cout << "Invalid Input!";
	}

	
	return 0;
}