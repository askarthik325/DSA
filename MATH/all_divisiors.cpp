#include<iostream>
using namespace std;
// this function has theta sqrt n time complexity 
int alldiv(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout << i << endl;
            if(i!=n/i){
                cout << n/i << endl;
            }
        }
        
    }
}
// theta of n
int alldiv1(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << endl;
        }
    }
}
int main(){
    cout << "Enter a number to find all of its divsiors:";
    int n;
    cin >> n;
    alldiv(n);
}