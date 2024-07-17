#include<iostream>
using namespace std;

void lastOccTr(string&s, char x, int i, int&ans){
    //base case
    if(i>=s.size()){
        return;
    }

    //processing
    if(s[i]==x){
        ans=i;
    }
    //recusive call
    lastOccTr(s,x,i+1,ans);
}
int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    char x;
    cout<<"occurance of string index no is:"<<endl;
    cin>>x;
    int ans=-1;
    lastOccTr(s,x,0,ans);
    cout<<ans<<endl;
    return 0;
}