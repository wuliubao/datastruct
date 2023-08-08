#include <iostream>
#include <vector>
#include <regex>
#include <stack>
#include <set>
#include <unordered_map>

using namespace std;

int optPri(char opt) {
	switch (opt) {
	case '#':
		return 1;
		break;
	case '$':
		return 2;
		break;
	default:
		break;
	}
}

void alien_expression() {
	string input;
	cin >> input;

	stack<int> numStack;
	stack<char> optStack;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] > '0' && input[i] < '9') {
			numStack.push(input[i]);
		}
		if (input[i] == '#' || input[i] == 's') {
		}
	}
}

void bf(vector<size_t>& out, string& main, string& sub) {
	size_t x = 0;
	size_t y = 0;
	for (size_t i = 0; i < (main.size() - sub.size()); i++) {
		x = i;
		for (size_t j = 0; j < sub.size(); j++) {
			if (main[x] == sub[j]) {
				if (j == sub.size() - 1) {
					out.push_back(i);
				}
				x++;
			}
			else {
				break;
			}
		}
	}
}

void regex_test(vector<string>& container, string& in) {
	regex split(" |,|'");
	vector<string> my(sregex_token_iterator(in.begin(), in.end(), split, -1), sregex_token_iterator());
	container = my;
}

void regex_int_test() {
	string input;
	getline(cin, input);
	regex split(",");
	vector<int> pro_array;
	sregex_token_iterator end;
	for (sregex_token_iterator iter(input.begin(), input.end(), split, -1); iter != end; iter++) {
		pro_array.push_back(stoi(iter->str()));
	}
	for (int item : pro_array) {
		cout << item << endl;
	}
};

void string_algroithm_test() {
	string main = "liu bao love xu tian tian, bao zai love ti'an niu";
	string sub = "tian";


	int v = main.find(sub);
	string b = main.substr(0, v);
	string emp;
	cout << emp.size() << endl;
	return;

	vector<string> out;

	regex_test(out, main);

	//bf(out, main, sub);
	set<string> my(out.begin(), out.end());

	//cout << out.size() << endl;
	for (auto item : out) {
		cout << item << endl;
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