#include<iostream>
using namespace std;
string removeDuplicates(string s){
  string ans="";
  int index=0;

  while(index <s.length()){
    //same case , tb rightmost charcter strting and s ka current element
    if(ans.length() > 0 && ans[ans.length()-1]==s[index]){
       ans.pop_back();
    }
    else{
      //push
      ans.push_back(s[index]);
    }
    index++;
   
  }
  return ans;
}
int main(){
  string s;
  cout<<"Enter a string: ";
  cin>>s;
  string result=removeDuplicates(s);
  cout<<"string after remove adjecent duplicates: "<<result<<endl;
  return 0;
}