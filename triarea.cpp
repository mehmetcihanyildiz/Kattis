#include<iostream>

using namespace std;

int main() {
    float height, base;
    float area;
    cin >> height >> base;
    area = float((height * base) / 2);
    cout << area;
    return 0;
}