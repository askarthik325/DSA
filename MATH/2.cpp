#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    if(n==0 || n==1){
        return fact;
    }
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    int res=0;
    while(fact%10==0){
        res++;
        fact = fact/10;
    }
    return res;
}

int main(){
    int n;
    cout<< "num:";
    cin>>n;
    cout << factorial(n);

}