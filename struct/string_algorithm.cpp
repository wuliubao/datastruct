#include <iostream>
#include <vector>

using namespace std;


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

void string_algroithm_test() {
	string main = "liu bao love xu tian tian, bao zai love tian niu";
	string sub = "tian";

	vector<size_t> out;

	bf(out, main, sub);


	cout << out.size() << endl;
	for (auto item : out) {
		cout << item << endl;
	}
}