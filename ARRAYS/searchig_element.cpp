#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the array length:";
    cin >> n;
    int arr[n];
    cout << "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout<< "Enter a element to search:";
    cin >>k;
    int index=-1;
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            index =i;
            break;
        }
    }
    if(index>=0){
        cout << "Index position:"<<index;
    }
    else{
        cout<<"not present in array";
    }
    return 0;
    
}