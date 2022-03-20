#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool com(int a, int b) {
	return a < b;
}

void sort_algroithm_test() {
	int test[7] = { 1, 4, 2, 10, 100, 3 , 7 };

	sort(test,test+7, com);

	vector<int> abc{ 1, 4, 100, 20 , 3, 7 };

	sort(abc.begin(), abc.end(), com);

	for (auto i : abc) {
		cout << i << endl;
	}

}