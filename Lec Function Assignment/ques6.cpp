//set count bit
#include<iostream>
using namespace std;

int setbitCount(int n){
    int count=0;
    while(n>0){
        int bit=n%2;
        if(bit==1){
            count++;
        
        }
         n=n/2;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int setCount=setbitCount(n);
    cout<<setCount<<endl;
   return 0;
} 