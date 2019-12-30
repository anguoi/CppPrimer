// ch3.13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	cout << "v1" << endl;
	vector<int> v1;
	for (decltype(v1.size()) iv = 0; iv != v1.size(); iv++) {
		cout << v1[iv] << endl;
	}

	cout << "v2" << endl;
	vector<int> v2(10);
	for (decltype(v2.size()) iv = 0; iv != v2.size(); iv++) {
		cout << v2[iv] << endl;
	}

	cout << "v3" << endl;
	vector<int> v3(10, 42);
	for (decltype(v3.size()) iv = 0; iv != v3.size(); iv++) {
		cout << v3[iv] << endl;
	}

	cout << "v4" << endl;
	vector<int> v4{ 10 };
	for (decltype(v4.size()) iv = 0; iv != v4.size(); iv++) {
		cout << v4[iv] << endl;
	}

	cout << "v5" << endl;
	vector<int> v5{ 10, 42 };
	for (decltype(v5.size()) iv = 0; iv != v5.size(); iv++) {
		cout << v5[iv] << endl;
	}

	cout << "v6" << endl;
	vector<string> v6{ 10 };
	for (decltype(v6.size()) iv = 0; iv != v6.size(); iv++) {
		cout << v6[iv] << endl;
	}

	cout << "v7" << endl;
	vector<string> v7{ 10 ,"hi" };
	for (decltype(v7.size()) iv = 0; iv != v7.size(); iv++) {
		cout << v7[iv] << endl;
	}

	return 0;
}
