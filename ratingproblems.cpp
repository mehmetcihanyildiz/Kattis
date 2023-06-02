#include<iostream>

using namespace std;

int main() {
    float judges, rated;
    cin>> judges >> rated;

    float sum = 0;
    for (int i = 0; i <rated; i++) {
		float temp;
		cin >> temp;
		sum += temp;
	}

    float maxresult = (sum + (judges - rated) * 3) / judges;
    float minresult = (sum + (judges - rated) * (-3)) / judges;
    cout<< minresult << " " << maxresult << endl;

    return 0;
}