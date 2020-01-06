#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec{ 1,3,8,9,7,11 };
	for (auto &i : ivec) i = (i % 2) ? (i * 2) : i;

	for (auto i : ivec)cout << i << " ";
	cout << endl;

	return 0;
}