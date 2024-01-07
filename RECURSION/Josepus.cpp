#include<bits/stdc++.h>
using namespace std;
int jos(int n, int k){
    if(n==1){
        return 0;
    }return (jos(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cout << "Enter no of persons:";
    cin >>n;
    cout << "Enter kill person:";
    cin >> k;
    cout << jos(n,k) << " is alive..!"; 
    return 0;
}