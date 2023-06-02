#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    float a;
    cin >> a;
    
    cout << setprecision(4) << 100/a << "\n";
    cout << setprecision(4) << 100/(100-a) << "\n";

    return 0;
}