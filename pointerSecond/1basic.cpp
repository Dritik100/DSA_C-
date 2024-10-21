#include<iostream>
using namespace std;
int main(){
  int a=5;
  cout<<a<<endl;
  cout<<"adrees of a: "<<&a<<endl;
  //ponter creation

  int* ptr=&a;
  //access value stored at address in ptr
  cout<<ptr<<endl;
  cout<<"Accessing: "<<*ptr <<endl;
  cout<<&ptr<<endl;


//   int a=10;
//   cout<<a<<endl;
//   cout<<&a<<endl;

//   int* ptr=&a;
//   cout<<ptr<<endl;
//   cout<<&ptr<<endl;



//   int a=5;
//   int* ptr=&a;
//   cout<<sizeof(ptr)<<endl;

//   char ch='k';
//   char* cptr=&ch;
//   cout<<sizeof(cptr)<<endl;;

//   long lachi=10;
//   long* lptr=&lachi;
//   cout<<sizeof(lptr)<<endl;


// ponter case me koi garbage value print karega


//   int a=5;
//   int* p=&a;
//   p=p+1;
//   cout<<*p;



//    int arr[5]= {10,20,30,40,50};
//    arr[]=arr+1;


//   int arr[4]={10,20,30,40};
//   int*p=arr;
//   int *q=arr+1;

//   cout<<arr<<endl;
//   cout<<&arr<<endl;
//   cout<<arr[0]<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<p<<endl;
//   cout<<&p<<endl;
//   cout<<*p<<endl;
//   cout<<q<<endl;
//   cout<<&q<<endl;
//   cout<<*q<<endl;
//   cout<<*p+1<<endl;
//   cout<<*(p)+2<<endl;
//   cout<<*(q)+2<<endl;
//   cout<<*(q+4)<<endl;



// // pointer to char
// char ch[50]="ritik";
// char* cptr=ch;
// cout<<cptr<<endl;

// int arr[5]={10,20,30};
// int* p=arr;
// cout<<p;

// char ch[50]="statement";
// char * cptr=&ch[0];

// cout<<*ch<<endl;
// cout<<&ch<<endl;
// cout<<*(ch+3)<<endl;
// cout<<cptr<<endl;
// cout<<*(cptr+3)<<endl;
// cout<<cptr+2<<endl;
// cout<<cptr+8<<endl;

// char ch='a';
// char * cptr=&ch;
// cout<<cptr;
  return 0;
}