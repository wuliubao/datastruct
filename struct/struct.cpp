// struct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
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

//字符串 S 由小写字母组成。我们要把这个字符串划分为尽可能多的片段，同一个字母只会出现在其中的一个片段。返回一个表示每个字符串片段的长度的列表。
//示例：
//输入：S = "ababcbacadefegdehijhklij"
//输出：[9, 7, 8]
//解释：
//划分结果为 "ababcbaca", "defegde", "hijhklij"。
//每个字母最多出现在一个片段中。
//输入：S = "abcadbcefghgehik"
//输出：[7, 7, 1, 1]
//解释：
//划分结果为 "abcadbc", "efghgeh", "i", "k"。

void test() {
	string  input = "ababcbacadefegdehijhklij";

	vector<int> result;
	unordered_map<char, int> index_map;

	for (int i = 0; i < input.size(); i++) {
		index_map[input[i]] = i;
	}
	for (pair<char, int> item : index_map) {
		cout << item.first << ':' << item.second << endl;
	}
	int start = 0, last = 0;
	for (int i = 0; i < input.size(); i++) {
		last = max(last, index_map[input[i]]);
		if (i == last) {
			result.push_back(last - start + 1);
			start = i + 1;
		}
	}

	for (int item : result) {
		cout << item << endl;
	}
}

int main(int argc, char** argv)
{
    std::cout << "Hello Test!\n";
	string_algroithm_test();
	return 0;
}

