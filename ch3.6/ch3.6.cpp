// ch3.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

int main()
{
	std::string str ( "hello world!");
	for (auto &s : str) {
		s = 'X';
	}	
	std::cout << str << std::endl;
}
