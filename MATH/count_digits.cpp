#include <iostream>
using namespace std;
int main(){
    int x,res=0;
    cout << "Enter a number:";
    cin >> x;
    while(x>0){
        x=x/10;
        res++;
    }
    cout<<"The Count of digits in the number is :"<<res;
    return 0;
}