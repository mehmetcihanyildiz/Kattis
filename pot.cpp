#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
		cin >> arr[i];
        int power = arr[i] % 10;
        arr[i] /= 10;
        sum += pow(arr[i], power);
	}

    cout<< sum << endl;
    return 0;
}