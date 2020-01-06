#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	unsigned grade;
	while (cin >> grade)
		cout << ((grade < 60) ? "fail" : (grade < 75) ? "low pass" : (grade < 90) ? "pass " : "high pass") << endl;

	return 0;
}