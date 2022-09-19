#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	Point A(1, 2, 3), B (1, 1, 1), C = A - B;

	cout << endl << '\t';
	C.print();
	cout << endl;

	return 0;
}