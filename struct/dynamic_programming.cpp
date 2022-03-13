#include <iostream>

using namespace std;

int fib(int n, int memo[] ) {
	if (n <= 1) {
		memo[n] = n;
		return memo[n];
	}
	if (memo[n]) {
		memo[n] = fib(n-1, memo) + fib(n-2, memo);
	}
	return memo[n];

}

int fib_iteration(int n) {
	int* arr = new int[n+1];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}

void dynamic_programming_test() {
	int memo[9];
	int result = fib_iteration(8);
	cout << result << endl;

}