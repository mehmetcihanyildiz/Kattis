#include<iostream>

using namespace std;

int main() {
   
    int megabytes, n;
    cin >> megabytes >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
		int totalmegabytes;
		cin >> totalmegabytes;
		sum += totalmegabytes;
	}
    cout << megabytes * (n + 1) - sum;

    return 0;
}