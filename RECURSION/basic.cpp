#include<iostream>
using namespace std;
void fun(int n){
    if (n==0){
        return;
    }
    cout << "karthik is a good boy:)" << endl;
    fun(n-1); 
}
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    fun(n);
}