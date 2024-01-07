#include<iostream>
using namespace std;
// for finding prime number
bool isprime(int n){
    if(n==0||n==1){
        return false;
    }
    if(n==2||n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%i+2==0){
            return false;
        }
    }
    return true;
}
// prime factors function
int primefactor(int n){
    for(int i=2;i<n;i++){
        if(isprime(i)){
            int x = i;
            while(n%x==0){
                cout << i << " ";
                x = x*i;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter a number to find prime factors:";
    cin >> n;
    primefactor(n);
}
