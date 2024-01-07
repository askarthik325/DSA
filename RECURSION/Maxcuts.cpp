#include<bits/stdc++.h>
using namespace std;
int maxcut(int n, int a,int b,int c){
    if(n==0) return 0;
    if(n<0) return -1;
    int res = max({maxcut(n-a,a,b,c),maxcut(n-b,a,b,c),maxcut(n-c,a,b,c)});
    if(res==-1) return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    cout << "Enter rope length:";
    cin >> n;
    cout << "Enter cut length-1:";
    cin >> a;
    cout << "Enter cut length-2:";
    cin >> b;
    cout << "Enter cut length-3:";
    cin >> c;
    cout << "The max pieces are:" << maxcut(n,a,b,c);    
}