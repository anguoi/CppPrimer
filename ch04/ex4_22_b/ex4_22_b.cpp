#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	unsigned grade;
	while (cin >> grade) {
		if (grade < 60)
			cout << "fail" << endl;
		else if (grade < 75)
			cout << "low pass" << endl;
		else if (grade < 90)
			cout << "pass" << endl;
		else
			cout << "high pass" << endl;
	}
	return 0;
}