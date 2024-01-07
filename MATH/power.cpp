#include<iostream>
using namespace std;
int power(int n,int x){
    int res=1;
    for(int i=0;i<x;i++){
        res = res*n;
    }
    return res;
}
int main(){
    int n,x;
    cout<< "Enter first number:";
    cin>>n;
    cout<< "Enter second number:";
    cin>>x;
    cout<<power(n,x);


}