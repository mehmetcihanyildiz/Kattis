#include<iostream>

using namespace std;

int main() {
    int hours, minutes;
    cin>>hours>>minutes;
    if (hours != 0 && minutes >= 45) {
        cout<<hours<<" "<<minutes-45;
    }
    else if (hours != 0 && minutes < 45) {
        cout << hours-1 << " " << minutes + 15;
    }
    else if (hours == 0 && minutes >= 45) {
		cout << hours << " " << minutes - 45;
	}
    else if (hours == 0 && minutes < 45) {
		cout << 23 << " " << minutes + 15;
	}
    return 0;
}