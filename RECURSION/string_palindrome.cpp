#include <bits/stdc++.h>
using namespace std;
bool IsPalin(string str, int start, int end){
    if(start>=end){
        return true;
    }
    return(str[start]==str[end])&&IsPalin(str,start+1,end-1);

}
int main(){
    string str;
    int start = 0;
    cout<< "Enter a string to check Palindrome:";
    cin>>str;
    int end =str.length()-1;
    int res = IsPalin(str,start,end);
    if(res==0){
        cout << "Not Palindrome";
    }
    else{
        cout<<"Palindrome";
    }
}