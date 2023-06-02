#include<iostream>

using namespace std;

int main() {

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			cout << input[i];
		}
	}

	return 0;
}