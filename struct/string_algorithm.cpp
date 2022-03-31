#include <iostream>
#include <vector>
#include <regex>
#include <stack>
#include <set>

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

	vector<string> out;

	regex_test(out, main);

	//bf(out, main, sub);
	set<string> my(out.begin(), out.end());


	//cout << out.size() << endl;
	for (auto item : out) {
		cout << item << endl;
	}
}