#include<iostream>
using namespace std;
int main(){

    int n; 
    cin>>n;

    //outer
    for(int row=0; row<n; row=row+1){
        //inner
        //space
        for(int col=0; col<row; col=col+1){
            cout<<" ";
        }
        //star
        int totalCol=n-row;
        for(int col=0; col< totalCol;col=col+1){
            if(col==0 || col == totalCol-1){
                cout<<"*" <<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;

    }
 return 0;
}