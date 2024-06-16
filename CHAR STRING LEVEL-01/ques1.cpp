#include<iostream>
using namespace std;
int main(){
    //creation
    char ch[100];
    //input
    // cin>>ch;
    cin.getline(ch,100);

    //print 
    cout<<"printing the value of ch:"<<ch<<endl;

    //printing using loop
    // for(int i=0;i<10;i++){
    //     cout<<"At index:"<< i <<" "<<ch[i]<< endl;
    // }

    // char temp=ch[6];
    // int value=(int)temp;
    // cout<<"Printing integer value"<<value<<endl;

    return 0;
}