#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int start = 0, end = 0, ans = 0;
    for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    if (n % 2 != 0) {
        cout<<"still running";
	}
    else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
				start = arr[i];
			}
            else {
				end = arr[i];
				ans += end - start;
			}
		}
		cout << ans;
	}
    return 0;
}