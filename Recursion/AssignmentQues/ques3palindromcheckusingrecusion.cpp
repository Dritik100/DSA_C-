#include<iostream>
using namespace std;
bool isPalindrome(string&s, int start, int end){
    //base case
    if(start>=end){
        return true;
    }
    //processing
    if(s[start] != s[end]){
        return false;
    }
     
    //rr
    return isPalindrome(s, start+1, end-1);
}
int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<isPalindrome(s,0, s.size()-1)<<endl;
    return 0;
}