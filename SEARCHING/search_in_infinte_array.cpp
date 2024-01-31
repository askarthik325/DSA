#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int low,int high,int x){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if (arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int infinte_search(int arr[],int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(arr[i]<x){
        i=i*2;
    }
    if(arr[i]==x){
        return i;
    }return bsearch(arr,i/2+1,i-1,x);

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,12345};
    int x;
    cout<<"Enter a number to search:";
    cin >>x;
    int k=infinte_search(arr,x);
    if(k==-1){
        cout<< "Element not present in the array.";
    }
    else{
        cout<<"Element present at index:"<<k;
    }
}