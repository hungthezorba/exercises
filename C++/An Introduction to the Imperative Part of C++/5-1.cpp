#include <iostream>

using namespace std;

bool isPrime(int number) {
	bool check = true;
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0){
			check = false;
			return check;
		}
	}
	return check;
} 

bool isInRange(int number) {
	if (number > 1 && number < 1000)
		return true;
	else
		return false;
}

int main() {
	// Initialize
	int number;

	cout << "Input an integer number between 1 - 1000: ";
	cin >> number;

	if (isInRange(number)) {
		if (isPrime(number)) {
			cout << "True" << endl;
		} else {
			cout << "False" << endl;
		}
	} else {
		cout << "Number not in range 1 - 1000" << endl;
	}

	return 0;
}