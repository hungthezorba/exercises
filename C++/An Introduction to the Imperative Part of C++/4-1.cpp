#include <iostream>
#include <fstream>


using namespace std;

int main() {

	ifstream in_stream;
	ofstream out_stream;
	char chr;	

	in_stream.open("4-1.cpp");

	if (in_stream.fail()) {
		cout << "Cannot open the source file" << endl;
	} else {
		while (!in_stream.eof()) {
			cout << chr;
			in_stream.get(chr);
		}
	}

	return 1;
}