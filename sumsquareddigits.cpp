#include <iostream>
#include <cmath>
#include <math.h> 
 
using namespace std;

int main()
{
  int p;
  cin >> p;

  while(p--){
    int test;
    int base;
    unsigned long long num, final;
    int dig;
    int ssd = 0;

    cin >> test >> base >> num;

    int i = 0;
    while(num > 0){
      dig = num % base;
      num = num / base;
      ssd += dig * dig;
      final += dig * pow(10, i);
      i++;
    }
    cout << test << " " << ssd << "\n"; 
  }
  return 0;
}