#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp != -1)
        {
            sum += temp;
            count++;
        }
    }
    cout << (double)sum / count << endl;
    return 0;
}