// struct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

extern void sliding_test();
extern void string_algroithm_test();
extern void dynamic_programming_test();
extern void sort_algroithm_test();
extern void array_algroithm_test();
extern void test_array();

void acm_test() {
	// 整行输入
	string line_string;
	cout << "整行输入" << endl;
	getline(cin, line_string);
	cout << line_string << endl;

	// 单个遍历输入
	cout << "单个遍历输入" << endl;
	string single_string;
	while (cin >> single_string) {
		cout << single_string << endl;
	}
}

int main()
{
    std::cout << "Hello Test!\n";
	test_array();
}

