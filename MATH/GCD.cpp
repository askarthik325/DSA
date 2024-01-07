#include<iostream>
using namespace std;
// using normal method
int gcd(int a, int b){
    int res = min(a,b);
    while(res>0){
        if (a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

// using Euclidean formula --> is the efficient way for finding gcd.

int gcd1(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd1(b, a%b);
    }
}

//Another way
int gcd2(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }return a;
}

int main(){
    int a,b;
    cout << "Enter first number:";
    cin >> a ;
    cout << "Enter second number:";
    cin >> b;
    cout << "The GCD of two numbers is " << gcd(a,b) << endl;
    cout << "The GCD of two numbers is " << gcd1(a,b)<< endl;
    cout << "The GCD of two numbers is " << gcd2(a,b)<< endl;
    return 0;

}
