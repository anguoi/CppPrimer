// ch3.19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivc1(10,42);
	vector<int> ivc2{42,42,42,42,42,42,42,42,42};
	vector<int> ivc3;
	for (int i = 0; i != 10; ++i)
		ivc3.push_back(42);
	return 0;
}
