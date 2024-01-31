#include<bits/stdc++.h>
using namespace std;
int sqroot(int n){
    int low=1,high=n,ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n){
            return mid;
        }
        else if(msq>n){
            high=mid-1;
        }
        else{
            low=low+1;
            ans=mid;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number to find the root value:";
    cin>>n;
    int k=sqroot(n);
    cout<<"The square root value of "<<n<<" is:"<<k;
}