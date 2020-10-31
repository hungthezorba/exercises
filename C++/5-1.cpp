#include <iostream>

using namespace std;

bool isPrime(int number) {
	if (number > 1 && number < 1000) {
		int count = 0;
		for (int i = 2; i <= number / 2; i++) {
			if (number % i == 0)
				count++;
		}
		cout << count << endl;
		if (count > 0) {
			return false;
		} else {
			return true;
		}
	} else {
		return false;
	}
}

int main() {
	//
	if (isPrime(4)) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}