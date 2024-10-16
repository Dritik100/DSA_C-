#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

void createUpdateMapping(string& s){
  //find mapping
  char start='a';
  char mapping[300]={0};

  for(auto ch:s){
    if(mapping[ch]==0){
      mapping[ch]=start;
      start++;
    }
  }
  //update the string
  for(int i=0;i<s.length();i++){
    char ch=s[i];
    s[i]=mapping[ch];
  }
}
 vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

  vector<string>ans;

  //noprmalized pattern

  createUpdateMapping(pattern);

   // Loop through each word in the list and check if it matches the normalized pattern

   for(string s:words){
    string tempString=s;

    // Normalize the current word
        createUpdateMapping(tempString);

        // If the normalized word matches the normalized pattern, add it to the answer
        if (tempString == pattern) {
            ans.push_back(s);
        }
   }
   return ans;
 }
int main(){
  vector<string> words={"abc", "deq", "mee","nee","dkd","ccc"};
  string pattern="abb";

  vector<string>result= findAndReplacePattern(words,pattern);

  cout<<"matching words: ";
  for(const string& word: result){
    cout<<word<<" ";
  }
  cout<<endl;
  return 0;
}