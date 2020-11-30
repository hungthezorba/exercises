#include <iostream>

using namespace std;

int main() {

	char input;

	cout << "Enter a character: ";
	cin >> input;

	if (input >= 'a' && input <= 'z') {
		cout << "The upper case character corresponding to " << input << " is " << (char) (input - 32) << endl;

	}
	else if (input >= 'A' && input <= 'Z') {
		cout << "The lower case character corresponding to " << input << " is " << (char)(input + 32) << endl;
	}
	else{
		cout << input << " is not a letter" << endl;
	}

	return 1;
}
