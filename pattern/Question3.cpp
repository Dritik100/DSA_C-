#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1;j++){
            //caluclate distance from edge
            //dt--> dis from top
            //dl--> dis from left
            //dr-->dis from right
            //db--> dis from bottom
            int dt=i-1; 
            int db=2*n-1-i; 
            int dl=j-1 ;
            int dr=2*n-1-j;
            //find the minimum distance to the edge
            int min_distance= min(min(dt,db), min(dl,dr));
            cout<<n-min_distance<<" ";

        }
        cout<<endl;
    }
    return 0;
}


