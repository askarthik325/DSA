#include<iostream>
using namespace std;
int primefactor(int n){
    if(n<=1){
        return n;
    }
    while(n%2==0){
        cout << 2;
        n=n/2;
    }
    while(n%3==0){
        cout << 3;
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout << i;
            n=n/i;
        }
        while(n%(i+2)==0){
            cout << i+2;
            n=n/(i+2);
        }
    }
    if(n>3){
        cout << 3;
    }
}
int main(){
    int n;
    cout << "Enter a number to find prime factors:";
    cin >> n;
    primefactor(n);
}