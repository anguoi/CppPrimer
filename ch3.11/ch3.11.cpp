// ch3.11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	const string s = "Keep out!";
	for (auto &c : s) {
		cout << c << endl;
	}
}
//The type of c is const char&. read-only variable is not assignable.


