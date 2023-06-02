#include<iostream>
#include<string>

using namespace std;

int main(){
    string phone;
    bool found;
    cin>>phone;
    
    string r = phone.substr(0, 3);
    if(r == "555"){
        cout<<1;
    }
    else{
        cout<<0;
    }
    
    return 0;
}