#include<iostream>
using namespace std;
int main(){
  //creation
  string name;
  cout<<"Enter the name: ";

  //input
  // cin>>name;
  getline(cin,name);

  


  //output
  cout<<"printing name: "<<name<<endl;
  // cout<<"Printing first char: "<<name[0];
  //using loop

  // int index=0;
  // while(name[index]!='\0'){
  //   cout<<"Index: "<<index<<" character: "<<name[index]<<endl;
  //   index++;
  // }
  // cout<<"Printing index 6th value: "<<name[6]<<endl;
  // int value=(int)name[6];
  // cout<<"Value: "<<value<<endl;




  return 0;
}
