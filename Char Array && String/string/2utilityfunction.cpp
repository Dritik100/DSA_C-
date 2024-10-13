#include<iostream>
using namespace std;
int main(){
  // string name;
  // cout<<"Enter the name: ";
  // // cin>>name;
  // getline(cin, name);
  // cout<<"printing name: "<<name<<endl;

//   //1.length
//   // cout<<"Length of string: "<<name.length()<<endl;

//   //2.empty

//   string temp="";
//   // cout<<"empty of string: "<<name.empty()<<endl; //0 ---> yani false

//   // cout<<"String is empty or not: "<<temp.empty()<<endl;


// //3.at
//   // cout<<"char at postion 0 is: "<<name.at(4)<<endl;


// //4.front, back

// cout<<" Front Charcter of string is : "<<name.front()<<endl;

// cout<<" back Charcter of string is : "<<name.back()<<endl;



// 5.append

// string str1="Love";
// string str2="Babbar";

// cout<<"Before appending"<<endl;
// cout<<str1<<endl;
// cout<<str2<<endl;

// //apend
// str1.append(str2);

// cout<<"after appending"<<endl;
// cout<<str1<<endl;
// cout<<str2<<endl;



// 6.erase()
// string desc="This is a car";
// desc.erase(4,3);
// cout<<desc<<endl;


// 7.insert()

// string name="Ritik Dubey";
// string last= "Kumar ";

// name.insert(11, last);
// cout<<"Printing middle:  "<< name<<endl;



// 8.push_back , pop_back



// string name="Love";
// cout<<name<<endl;

// name.push_back('R');
// cout<<name<<endl;

// name.pop_back();
// cout<<name<<endl;




// 9.find()


// string str1="yar tera superstar desi kalakar";

// string str2="book";

// if(str1.find(str2)== string::npos){
//   //not found
//   cout<<"Not found"<<endl;
// }
// else{
//   cout<<"Found"<<endl;
//  }



// 10.copmare


// string str1="babbar";
// string str2="babbar";

// if(str1.compare(str2)==0){
//   cout<<"Matching";
// }
// else{
//   cout<<"Not matching"<<endl;
// }



// 11.substring

string desc="This is a car, big daddy of all suvs";
cout<<desc.substr(19,5)<<endl;


  return 0;

}