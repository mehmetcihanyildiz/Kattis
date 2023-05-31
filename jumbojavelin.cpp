#include<iostream>

using namespace std;

int main(){
    
    int n, k, s=0;
    int length;
    
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        s += k;
    }
    
    length = s - n + 1;
    
    cout<<length;
    
    return 0;
}