//check given nuber is prime or not
#include<iostream>
using namespace std;
bool checkPrime(int n){
    int i=2;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool isPrime= checkPrime(n);
    if(isPrime){
        cout<<"Is prime Number"<<endl;
    }
    else{
        cout<<"Is not prime Number"<<endl;
    }
   return 0;
} 
