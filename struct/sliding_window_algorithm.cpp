#include <iostream>

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
	for (int i = 0; i < size; i++) {
		total = 0;
		for (int j = i; j < size; j++) {
			total += nums[j];
			if (total >= k) {
			}
			cout << '[' << i << ',' << j << ", total=" << total << endl;
		}
	};
	return 0;
}

void sliding_test() {
	cout << "sliding!" << endl;
	int nums[] = { 2,3,1,2,4,3 };
	int k = 2;
	int value = brute_force(nums, sizeof(nums)/sizeof(nums[0]), k);

}