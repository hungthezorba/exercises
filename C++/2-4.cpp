#include <iostream>

using namespace std;

int main() {

	int x, n;
	int total = 1;
	
	cout << "Enter the number you want to raise: ";
	cin >> x;
	cout << "Enter the positive power: ";
	cin >> n;	

	for (int i = 0; i < n; i++) {
		total *= x;
	}

	cout << total << endl;

	return 1;
}