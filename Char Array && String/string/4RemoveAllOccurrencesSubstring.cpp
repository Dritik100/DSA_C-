#include<iostream>
using namespace std;
string removeAllOccurrences(string s,string part){
  while(s.find(part)!= string::npos){
    //if inside loop, it means that part exists in s string

    s.erase(s.find(part), part.length());
  }
  return s;
}
int main(){
  string s, part;
  cout<<"Enter a main string: ";
  cin>>s;

  cout<<"Enter the substring to remove: ";
  cin>>part;

  string result= removeAllOccurrences(s,part);

  cout<<"String after removing all occuurences of the substring: "<<result<<endl;

  return 0;
}