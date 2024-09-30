#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int>arr={1,2,4,5,7,8,9};
  int key=7;
  if(binary_search(arr.begin(), arr.end(),key)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }
  return 0;
}