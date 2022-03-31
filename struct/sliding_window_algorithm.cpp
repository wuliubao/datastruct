#include <iostream>
#include <queue>

using namespace std;

void brute_force_old(int nums[], int size, int k) {

	int total = 0;
	for (int i = 0; i < size - k + 1; i++) {
		total = 0;
		for (int j = i; j < i + k; j++) {
			total += nums[j];
		}
		cout << total << endl;
	}
}

int brute_force(int nums[], int size, int k) {
	int total;
	priority_queue<int, vector<int>, greater<int>> dis;
	for (int i = 0; i < size; i++) {
		total = 0;
		for (int j = i; j < size; j++) {
			total += nums[j];
			if (total >= k) {
				dis.push((j - i + 1));
			}
			cout << '[' << i << ',' << j << ", total=" << total << endl;
		}
	};

	cout << "[";
	while (!dis.empty()) {
		cout << dis.top() << ',';
		dis.pop();
	}
	cout << "]" << endl;

	return 0;
}

void sliding_window_algorhtim(int nums[], int size, int k) {
	int start = 0, end = 0, total = 0;
	priority_queue<int, vector<int>, greater<int>> dis;
	while (end < size) {
		total += nums[end];
		while (total >= k) {
			dis.push(end - start + 1);
			total -= nums[start];
			start++;
		}
		end++;
	}

	cout << "[";
	while (!dis.empty()) {
		cout << dis.top() << ',';
		dis.pop();
	}
	cout << "]" << endl;


}

void sliding_test() {
	cout << "sliding!" << endl;
	int nums[] = { 2,3,1,2,4,3 };
	int k = 7;
	sliding_window_algorhtim(nums, sizeof(nums)/sizeof(nums[0]), k);

}