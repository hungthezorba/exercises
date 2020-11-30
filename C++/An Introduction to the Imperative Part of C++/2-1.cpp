#include <iostream>
#include <iomanip>

using namespace std;

double fahToCel(int temp) {
	return (double) (temp - 32) * 5 / 9;
}

double celToAbs(double temp) {
	return temp + 273.15;
}

int main() {

	// Initialize
	int start = 0;
	const int END = 300;
	const int STEP = 20;

	cout << std::fixed << std::setprecision(2);

	cout << "Farenheit";
	cout.width(10);
	cout << "Celcius";
	cout.width(20);
	cout << "Absolute Value\n\n";

	for (; start <= END; start+= 20) {
		cout << start;
		cout.width(15);
		cout << fahToCel(start);
		cout.width(15);
		cout << celToAbs(fahToCel(start)) << endl;
	}

	return 1;
}
