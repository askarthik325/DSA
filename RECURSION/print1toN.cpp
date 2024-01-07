#include<iostream>
using namespace std;
void print1ton(int n,int k ){
    if(n==0){
        return;
    }
    cout << k << " ";
    print1ton(n-1,k+1);
    
}
int main(){
    int n;
    int k=1;
    cout << "Enter a number:";
    cin >> n;
    print1ton(n,k);
}