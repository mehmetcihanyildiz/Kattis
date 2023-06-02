#include<iostream>
#include<string>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		string word;
		cin >> word;
		if (i % 2 == 1) {
			cout << word << endl;
		}
	}
	return 0;
}