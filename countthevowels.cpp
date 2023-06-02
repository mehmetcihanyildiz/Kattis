#include <iostream>

using namespace std;

int main() {
    
    string str; 
	string vow="aiueoAIUEO";
    int counter = 0;
    
    getline(cin, str);
    
    for (int i=0; i<str.length(); i++) {
        if (vow.find(str[i]) != string::npos) {
            counter++;
        }
    }
    cout << counter;
    return 0;
}