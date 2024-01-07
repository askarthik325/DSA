#include<iostream>
using namespace std;
int evenodd(int arr[],int n){
    int res=1;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
                count++;
            }
            else{
                break;
            }
        }res=max(res,count);
    }return res;
}
int evenodd1(int arr[],int n){
    int res=1;
    int count=1;
    for(int j=1;j<n;j++){
        if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
            count++;
            res=max(res,count);
        }
        else
        {
            break;
        }

    }return res;
}
int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    cout<<evenodd(arr,n)<<" ";
    cout<<evenodd1(arr,n);
    return 0;
}