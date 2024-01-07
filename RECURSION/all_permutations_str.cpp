#include<bits/stdc++.h>
using namespace std;
void permute(string str,int i=0){
    if(i==str.length()-1){
        cout << str << " ";
        return;
    }
    for(int j=i; j<str.length();j++){
        swap(str[i],str[j]);
        permute(str,i+1);
        swap(str[i],str[j]);
    }
}
int main(){
    string str;
    cout << "Enter a String:";
    cin >> str;
    cout << "Permuted strings are:";
    permute(str);
}