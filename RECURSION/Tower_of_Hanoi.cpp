#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char A,char B,char C){
    if(n==1){
        cout<<"Move 1 from " << A <<" to "<< C << endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"Move "<< n<< " from " << A <<" to "<< C << endl;
    TOH(n-1,B,A,C); 
}
int main(){
    int n;
    char A='A';
    char B='B';
    char C='C';
    cout<< "Enter no.of Discs:";
    cin >> n;
    TOH(n,A,B,C);
    return 0;
}