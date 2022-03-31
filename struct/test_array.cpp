
#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

//½»»»
void min_swap() {
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

void test_array () {
	min_swap();
}