#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int count = 0;
	char chr;
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("./4-3.cpp");
	in_stream.get(chr);	
	cout << chr << endl;

	while(!in_stream.eof()) {
		count++;
		in_stream.get(chr);
	}
	in_stream.close();

	cout << count << endl;
}