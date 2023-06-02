#include<iostream>

using namespace std;

int main() {
    int a, b;
    int sum = 0;
    int result;
    cin>>a>> b;

    for (int i = 0; i < b; i++) {
        int temp1, temp2;
        cin>>temp1>>temp2;
        sum += temp1 * temp2;
    }

    result = sum / a;
    cout<<result<<endl;

    return 0;
}