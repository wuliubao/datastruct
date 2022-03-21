#include <iostream>

using namespace std;

void brute_force(int nums[], int size, int k) {

	int total = 0;
	for (int i = 0; i < size - k + 1; i++) {
		total = 0;
		for (int j = i; j < i + k; j++) {
			total += nums[j];
		}
		cout << total << endl;
	}

}

void sliding_test() {
	cout << "sliding!" << endl;
	int nums[] = { 2,3,1,2,4,3 };
	int k = 2;
	brute_force(nums,sizeof(nums)/sizeof(nums[0]), k);

}