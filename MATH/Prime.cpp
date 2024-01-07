#include <iostream>
using namespace std;
// General method
string prime(int n){
    if(n==0 || n==1){
        return "It's not a prime number";
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return "It's not a prime number";
        }
    }
    return "It's a prime number";
}

//for optimization of O(root n)

string prime1(int n){
    if(n==0 || n==1){
        return "It's not a prime number";
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "It's not a prime number";
        }
    }
    return "It's a prime number";
}
// for better optimization and to reduce many iterations 
string prime2(int n){
    if(n==0 || n==1){
        return "It's not a prime number";
    }
    if(n==2 || n==3){
        return "It's a prime number";
    }
    if(n%2==0 || n%3==0){
        return "It's not a prime number";
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%i+2==0){
            return "It's not a prime number";
        }
    }
    return "It's a prime number";
}
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << prime(n) << endl;
    cout << prime1(n) << endl;
    cout << prime2(n) << endl;
}