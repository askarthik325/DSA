#include<iostream>
using namespace std;
int palindrome(int x){
    int rev =0;
    int temp = x;
    while(temp!=0){
        int rem = temp%10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }
    if (rev==x){
        cout << x << " is a palindrome";
    }
    else{
        cout << x << " is not a palindrome";
    }
}
int main(){
    cout << "Enter a number to check weather it is a palindrome or not :";
    int x;
    cin >> x;
}