#include<iostream>
using namespace std;

void convertToUpperCase(char ch[], int n){
  int index=0;
  while(ch[index] != '\0'){
    //checkLowercase, then covert uppercase

    if(ch[index] >='a' && ch[index] <= 'z'){
      ch[index]= ch[index]-'a'+'A';
    }
    index++;
  }
}
int main(){
  char ch[1000];
  cin.getline(ch,100);

  cout<<"before: "<<ch<<endl;
  convertToUpperCase(ch,1000);
  cout<<endl<<"after: "<<ch<<endl;
  return 0;
}