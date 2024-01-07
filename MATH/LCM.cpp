#include<iostream>
using namespace std;
// Normal way for finding lcm
int lcm(int a,int b){
    int res=max(a,b);
    while(res>0){
        if(res%a==0 && res%b==0){
            return res;
        }res++;
    }return res;
}

// Finding LCM using a*b = gcd(a,b)*lcm(a,b) -->lcm(a,b) = a*b/gcd(a,b)
//let's write the gcd function
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
// By using the above gcd function and formula we can caluclate the LCM of Two numbers.
int lcm1(int a, int b){
    return (a*b/gcd(a,b));

}


int main(){
    int a,b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    cout << "The LCM of two numbers is " << lcm(a,b) << endl;
    cout << "The LCM of two numbers is " << lcm1(a,b) << endl;
    return 0;
}