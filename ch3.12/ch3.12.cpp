// ch3.12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> ivec;
	vector<string> svec = ivec;
	vector<string> svec(10, "null");
	return 0;
}
