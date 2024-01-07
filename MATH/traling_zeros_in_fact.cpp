#include<iostream>
using namespace std;
// normal way
int countzeros1(int n){
    int fact = 1;
    if(n==0||n==1){
        return fact;
    }
    else{
    for(int i=2;i<=n;i++){
        fact = fact *i;
    }
    cout<<fact;
    
    int res = 0;
    while(fact%10==0){
        res=res+1;
        fact = fact/10;
    }
    return res;
    }
}

// Efficient way by using prime factorization

int countzeros2(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact *i;
    }
    int res = 0;
    for(int i=5;i<=n;i=i*5){
        res = res+(n/i);
    }
    return res;
}
int main(){
    int n,i,fact,res;
    cout << "enter a number:";
    cin >> n;
    cout << "The count of zeros is " <<countzeros1(n);
}