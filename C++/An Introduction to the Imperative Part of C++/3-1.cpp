#include <iostream>

using namespace std;

double celsius_of(int fahr) {
	return (static_cast<double>(5) / 9) * (fahr - 32);
}

double absolute_value_of(int fahr) {
	return ((static_cast<double>(5)/9) * (fahr-32)) + 273.15;
}

void print_preliminary_message() {
	cout << "This program prints out a conversion table of temperatures.";
}

void input_table_specifications(int &lower, int &upper, int &step) {
	cout << "Enter the minimum (whole number) temperature you want in the table, in Fahrenheit: ";
	cin >> lower;
	cout << "Enter the maximum temperature you want in the table: ";
	cin >> upper;
	cout << "Enter the temperature difference you want between table entries: ";
	cin >> step;
}

void print_message_echoing_input(int lower, int upper, int step) {
	cout << "Temperature conversion table from" << lower << "Fahrenheit\n to" << lower  << "Fahrenheit, in steps of "<< step << "Fahrenheit";
}

void print_table(int lower, int upper, int step) {
	cout << "Fahrenheit";
	cout.width(15);
	cout << "Celsius";
	cout.width(15);
	cout << "Absolute Value\n";

	for (int i = lower; i <= upper; i+= step) {
		cout << lower;
		cout.width(20);
		cout << celsius_of(i);
		cout.width(17);
		cout << absolute_value_of(i) << endl;
	}
}


int main() {

	int lower = 0;
	int upper = 0;
	int step = 1;

	print_preliminary_message();

	input_table_specifications(lower, upper, step);

	print_message_echoing_input(lower, upper, step);

	print_table(lower, upper, step);

	return 0;
}