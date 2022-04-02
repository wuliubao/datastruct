#include <iostream>
#include <stack>

using namespace std;

// TLV
void tlv_parse(string tag, string content) {

}

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

void test_string() {

}
