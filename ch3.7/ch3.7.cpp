// ch3.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

int main()
{
	std::string str("hello");
	for (char &c : str)
		c = 'X';
	std::cout << str << std::endl;
}

