#include<iostream>
using namespace std;

// Non recursive function 
int fact(int x){
    int fact =1;
    if(x==0 || x==1){
        return fact;
    }
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}

// Recursive function

int factrec(int x){
    int fact = 1;
    if(x == 0){
        return fact;
    }
    return x * factrec(x-1);
}
int main(){
    int x;
    cout << "Enter a number to find factorial:";
    cin >> x;
    cout << "The factorial is " << fact(x);
    }