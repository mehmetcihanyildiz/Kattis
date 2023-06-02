#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	
	getline(cin,str);

	if (str.find(":)") != string::npos && str.find(":(") != string::npos) {
		cout<<"double agent";
	}
	else if (str.find(":)") != string::npos) {
		cout << "alive";
	}
	else if (str.find(":(") != string::npos) {
		cout << "undead";
	}
	else {
		cout << "machine";
	}

	return 0;
}