//Convert lower to upercase
#include<iostream>
using namespace std;

void convertToUpperCase(char ch[], int n){
    int index=0;
    while(ch[index]!='\0') {

        if(ch[index] >='a' && ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"before: "<<ch<<endl;
    convertToUpperCase(ch,100);
    cout<<endl<<"after: "<<ch<<endl;

}