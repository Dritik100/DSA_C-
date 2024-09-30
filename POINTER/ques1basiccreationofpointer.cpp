#include<iostream>
using namespace std;
int main(){


// int arr[5]={1,2,3,4,5};
// // int* ptr = &arr;
// char ch[10]="love";
// char* cptr=&ch;


int arr[5]={1,2,3,4,5};
int* ptr1=arr;

int (*ptr)[5]=&arr;
cout<<(*ptr)[0];
//   int a=5;
//   cout<<a<<endl;
//   cout<<"address of a :"<<&a<<endl;

// //pointer creation

// int* ptr=&a;
// //acessing value stored at address stored in ptr
// cout<<ptr<<endl;
// cout<<"Acessing:" <<*ptr<<endl;
// cout<<&ptr<<endl;


// int a=5;
// int* ptr=&a;
// cout<<sizeof(ptr)<<endl;

// char ch='k';
// char* cptr=&ch;
// cout<<sizeof(cptr)<<endl;

// long lachi=10;
// long* lptr=&lachi;
// cout<<sizeof(lptr);
  return 0;
}