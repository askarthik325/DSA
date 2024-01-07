#include<iostream>
using namespace std;
long int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout << "Enter a number to find factorial:";
    cin >> n;
    cout << fact(n);

}