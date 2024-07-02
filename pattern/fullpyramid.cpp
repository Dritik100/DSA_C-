
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
       for(int i=0; i<n;i++){
        //space
        for(int j=0; j<n-i-1;j=j+1){
            cout<<" ";
        }
        //star
        for(int j=0; j<i+1;j=j+1){
            cout<<"*" <<" ";
    }
    cout<<endl;
 }
    return 0;
}