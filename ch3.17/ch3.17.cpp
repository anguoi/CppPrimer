// ch3.17.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> vtr;
	string str;
	while (cin >> str)
	{
		vtr.push_back(str);
	}

	for (auto &s : vtr)
		for (auto &c : str)
			c = toupper(c);

	for (decltype(vtr.size()) iv = 0; iv != vtr.size(); ++iv) {
		if (iv != 0 && iv % 8 == 0)cout << endl;
		cout << vtr[iv] << " ";
	}
	cout << endl;
	return 0;
}
