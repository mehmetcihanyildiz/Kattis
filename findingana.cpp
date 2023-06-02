#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    bool flag = false;
    
    for (int i=0; i<word.length(); i++) {
        if (word[i] == 'a') {
            flag = true;
        }

        if (flag) {
            cout << word[i];
        }
    }
    return 0;
}