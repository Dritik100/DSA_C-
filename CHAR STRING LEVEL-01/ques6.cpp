// check palindrome valid or invalid
#include<iostream>
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

bool checkPalindrome(char ch[], int n){
    //n -> length of string

    int i=0;
    int j=n-1;

    while(i<=j){
        if(ch[i]== ch[j]){
            i++;
            j--;
        }
        else{
            //character are not matching
            return false;
        }
    }
    //sare character match kar gye hai
    //iska matalb pailindrom hai

    return true;

}
int main(){

    char ch[100];

    cin.getline(ch,100);
    int len= findLength(ch,100);
    bool isPalindrome=checkPalindrome(ch,len);
    if(isPalindrome){
        cout<<"Valid Palindrome"<<endl;
    }
    else {
        cout<<"Invalid Palindrome"<<endl;

    }
    return 0;
}