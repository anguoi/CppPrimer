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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
