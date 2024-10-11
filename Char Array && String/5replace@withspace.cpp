#include<iostream>
using namespace std;
void repalceCharcter(char ch[], int n){
  int index=0;
  while(ch[index] !='\0'){
    char curr=ch[index];
    if(curr=='@'){
      //insert space
      ch[index]=' ';

    }
    index++;
  }
  
}
int main(){
  char ch[1000];
  cin.getline(ch,100);
  cout<<"before"<<ch<<endl;
  repalceCharcter(ch,100);
  cout<<endl<<"after: "<<ch<<endl;
  return 0;

}