#include<iostream>
using namespace std;


// Function to find the length of a character string
int findLength(char ch[]) {
    int length = 0;
    while (ch[length] != '\0') {
        length++;
    }
    return length;  // Return the total length
}
//function to the check palindrome
bool checkPalindrome(char ch[], int n){
  // N---> length of string
  int i=0;
  int j=n-1;

  while(i<=j){
    if(ch[i]==ch[j]){
      i++;
      j--;
    }
    else{
      //charcter are not matching
      return false;
    }
  }
  return true;
}
int main(){
  char ch[1000];
  cin.getline(ch,100);
  int len=findLength(ch);

  bool isPalindrome = checkPalindrome(ch,100);
  if(isPalindrome){
    cout<<"Valid palindrome"<<endl;
  }
  else{
    cout<<"Invalid Palindrome"<<endl;
  }


  return 0;
}