#include<iostream>
#include<string.h>
using namespace std;
int findLength(char ch[], int size){
    int length=0;
    for(int i=0; i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
int main(){
    char ch [100];
    cin>>ch;
    // cin.getline(ch,100);
    int len=findLength(ch,100);
    cout<<"Length of string is:"<<len<<endl;
    cout<<"printing length:" <<strlen(ch)<<endl;
}