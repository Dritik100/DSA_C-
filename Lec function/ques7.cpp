// #include<iostream>
// using namespace std;

// void evenSumuptoN(int n){
//     int sum=0;
//     for(int i=2;i<=n;i=i+2){
//         sum=sum+i;
//     }
//     cout<<"Final Even sum is:"<<sum<<endl;
// }
// int main(){
//     evenSumuptoN(10);
//    return 0;
// }


#include<iostream>
using namespace std;

void evenSumuptoN(int n){
    int sum=0;
    for(int i=1; i<=n;i++){
        if(n%2==0){
        sum=sum+i;
        }
    }

    cout<<"Final Even sum is:"<<sum<<endl;

}  
    

int main(){
    evenSumuptoN(10);
   return 0;
}