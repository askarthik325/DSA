#include<iostream>
using namespace std;
int primefactor(int n){
    if(n<1){
        return n;
    }
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout << i;
            n=n/i;
        }
    }
    if(n>1){
        cout << n;
    }
}
int main(){
    int n;
    cout << "Enter a number to find prime factors:";
    cin >> n;
    primefactor(n);
}