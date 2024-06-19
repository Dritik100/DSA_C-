#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<(i+j)%2<<" ";
        }
          cout<<endl;
    }
   

}