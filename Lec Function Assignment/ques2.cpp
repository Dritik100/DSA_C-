//Given number is even or odd(Normal method & Bitwise method)

// #include<iostream>
// using namespace std;
// bool checkEven(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     bool isEven=checkEven(n);
//     if(isEven){
//         cout<<"Is Even Number"<<endl;
//     }
//     else{
//         cout<<"Is odd Number"<<endl;
//     }
//    return 0;
// } 

// Bit Wise Method

#include<iostream>
using namespace std;
bool checkEven(int n){
    if((n&1)==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool isEven=checkEven(n);
    if(isEven){
        cout<<"Is Even Number"<<endl;
    }
    else{
        cout<<"Is odd Number"<<endl;
    }
   return 0;
} 
