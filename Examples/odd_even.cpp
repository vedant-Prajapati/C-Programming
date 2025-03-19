#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:";
    cin>>n;
    if(n%2==0) cout<<"Even";
    if(n%2!=0) cout<<"Odd";
    return 0;
}