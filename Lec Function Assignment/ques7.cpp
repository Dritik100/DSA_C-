#include<iostream>
using namespace std;

int setusingDigit(int numberofdigit){
   int num=0;
   for(int i=0;i<numberofdigit;i++){
    cout<<"Enter the digit"<<endl;
    int digit;
    cin>>digit;
    num=num*10+digit;
    cout<<"Nuber of digit so far:"<<num<<endl;
   }
   return num;
}

int main(){
    int numberofdigit;
    cin>>numberofdigit;
    int num=setusingDigit(numberofdigit);
    cout<<"Number is created by digit:"<<num<<endl;
   return 0;
} 