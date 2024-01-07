#include<iostream>
using namespace std;
int SumDigit(int n){
    if (n==0){
        return 0;
    }
    n%10;
    return SumDigit(n/10)+n%10;
}
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "The sum of digits of " << n << "is " << SumDigit(n);
}