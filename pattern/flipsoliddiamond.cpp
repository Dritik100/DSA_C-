
#include<iostream>
using namespace std;
int main(){

    int n; 
    cin>>n;
    
    for(int row=0; row<n;row=row+1){
        //inverted pyramid 1
        for(int col=0; col<n-row;col=col+1){
            cout<<"*";
        }

        // full pyramid 1
        for(int col=0; col<2*row+1; col=col+1){
            cout<<" ";
        }

        //inverted pyramid 1
        for(int col=0; col<n-row;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }

      for(int row=0; row<n;row=row+1){
        //inverted pyramid 1
        for(int col=0; col<row+1;col=col+1){
            cout<<"*";
        }

        // full pyramid 1
        for(int col=0; col<2*n-2*row-1; col=col+1){
            cout<<" ";
        }

        //inverted pyramid 1
        for(int col=0; col<row+1;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }

   
  
 return 0;
}