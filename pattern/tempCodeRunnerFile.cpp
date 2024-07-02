
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
            //print star foe first and last column
            if(j==0 || j==i+1-1){
                cout<<"* ";
            }
            else{
                //for every col between first and last column print space
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}