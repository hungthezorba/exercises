#include <iostream>
#include <fstream>
using namespace std;
int countChar(string filename) {
	int count = 0;
	char chr;
	fstream file;
	file.open(filename);
	file.get(chr);
	while(!file.eof()){
		file.get(chr);
		count++;
	}
	file.close();
	return count;
}

char getCharacter(string filename, int position) {
	char chr;
	fstream file;
	file.open(filename);
	file.get(chr);
	for (int i = 0; i < position; i++) {
		file.get(chr);
	}
	file.close();
	return chr;
}
int main() {
	string filename = "4-4.cpp";

	int numberOfCharacter = countChar(filename);
	for (int i = numberOfCharacter - 1; i >= 0; i--) {
		cout << getCharacter(filename, i);
	}
	cout << endl;

	return 0;
}