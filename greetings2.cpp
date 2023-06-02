#include<iostream>
#include<string>

using namespace std;

int main(){
    int e=0;
    string greetings;
    cin>>greetings;
    
    for(int i=0;i<greetings.size();i++){
        if(greetings[i] == 'e'){
            e++;
        }
    }
	string str(e*2,'e');
	cout<<'h'<<str<<'y'<<endl;
    
    return 0;
}