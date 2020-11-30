#include <iostream>

using namespace std;

class Rectangle {
private:
	float width;
	float height;
public:
	Rectangle(float width_value, float height_value) {
		width = width_value;
		height = height_value;
	}

	float area() {
		return width * height;
	}

	float getWidth() {
		return width;
	}

	float getHeight() {
		return height;
	}
};

int main() {
	Rectangle rec1(10.0, 20.0);
	cout << "Area of the rectangle is " << rec1.area() << endl;
}