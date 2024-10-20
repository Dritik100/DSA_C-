#include<iostream>
using namespace std;
int main(){
  // int a=5;
  // cout<<a<<endl;
  // cout<<"adrees of a: "<<&a<<endl;
  // //ponter creation

  // int* ptr=&a;
  // //access value stored at address in ptr
  // cout<<ptr<<endl;
  // cout<<"Accessing: "<<*ptr <<endl;
  // cout<<&ptr<<endl;


  // int a=10;
  // cout<<a<<endl;
  // cout<<&a<<endl;

  // int* ptr=&a;
  // cout<<ptr<<endl;
  // cout<<&ptr<<endl;



  int a=5;
  int* ptr=&a;
  cout<<sizeof(ptr)<<endl;

  char ch='k';
  char* cptr=&ch;
  cout<<sizeof(cptr)<<endl;;

  long lachi=10;
  long* lptr=&lachi;
  cout<<sizeof(lptr)<<endl;
  return 0;
}