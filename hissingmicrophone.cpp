#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;

	cin >> word;

	for (int i = 1; i < word.length(); i++) {
		if (word.at(i - 1) == word.at(i) && word.at(i) == 's') {
			cout << "hiss";
			return 0;
		}
	}
	cout << "no hiss";

	return 0;
}