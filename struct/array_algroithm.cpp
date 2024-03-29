#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

bool compare(vector<int> first, vector<int>sec) {

	return first[0] < sec[0];
}

void street_lamp_range() {
	int n;
	cin >> n;
	vector<int> input;
	vector<vector<int>> section;
	int count = 0;
	while (n) {
		int temp;
		cin >> temp;
		input.push_back(temp);
		vector<int> tm_vec = { count * 100 - temp, count * 100 + temp };
		section.push_back(tm_vec);
		count++;
		n--;
	}

	sort(section.begin(), section.end(), compare);


	int out_v = 0;
	for (int i = 0; i < section.size() - 2; i++) {
		int range = section[i + 1][0] - section[i][1];
		if (range > 0) out_v += range;
	}

	for (vector<int> item : section) {
		cout << "[";
		for (int inner_item : item) {
			cout << inner_item << ",";
		}
		cout << "]" << endl;
	}

	cout << out_v << endl;
}

//����
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

void array_algroithm_test() {
	street_lamp_range();
}