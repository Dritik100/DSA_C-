#include<iostream>
using namespace std;
 int printSum(int a,int b,int c){
    int ans=a+b+c;
    return ans;
 }
int main(){
   int sum= printSum(1,2,7);
   cout<<"Sum is :"<<sum<<endl;
   return 0;
}