#include<iostream>
using namespace std;
string decodeMessage(string key,string message){

  //create a mapping array to store the character mapping

  char mapping[128]={0};
  char start='a';

  for(auto ch: key ){
    if(ch!=' ' && mapping[ch]==0){
      mapping [ch]=start;
      start++;
    }
  }
  //use mapping
  string ans;
  for(auto ch: message){
    if(ch==' '){
      ans.push_back(' ');
    }
      else{
        char deCodeChar=mapping[ch];
        ans.push_back(deCodeChar);

      }
  }
  return ans;
  
}
int main(){
  string key="the quick brown fox jumps over the lazy dog";
  string message="vkbs bs t suepuv";

  //decode essage
  string decoded= decodeMessage(key,message);

  cout<<"Decoded message: "<<decoded<<endl;
  return 0;
}