#include <iostream>

using namespace std;

void print_pyramid(int height) {
	for (int i = 1; i <= height; i++) {
		for (int k = 0; k < height - i; k++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "**";
		}
		cout << endl;
	}
}


int main() {
	// Initialize
	int number;

	cout << "This program prints a 'pyramid' shape of \na specific height on the screen." << endl;
	cout << "how high would you like the pyramid?: ";

	cin >> number;

	while (number < 1 || number > 30) {
		cout << "Pick another height (must be between 1 and 30): ";
		cin >> number;
	}

	print_pyramid(number);

	return 1;

}