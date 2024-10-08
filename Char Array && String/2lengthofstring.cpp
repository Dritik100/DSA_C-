#include<iostream>
#include<string.h>
using namespace std;

int findLength( char ch[], int size){
  int length=0;
  for(int i=0; i<size;i++){
    if(ch[i]=='\0'){
      //rukna hai 
      break;
    }
    else{
      length++;
    }
  }
  return length;

}

int main(){

  char ch[100];
  cout<<"Enter the value: ";
  // cin>>ch;//isme sirf enter ke pahle wala count hota hai
  cin.getline(ch,100);//isme space count hota hai;

  int len=findLength(ch,100);
  cout<<"length of string is: "<<len<<endl;
  cout<<"printing length: "<<strlen(ch)<<endl;
  return 0;
}



//using while loop


#include <iostream>
using namespace std;

// Function to find the length of a character string using a while loop
int findLength(char ch[]) {
    int length = 0;
    // Use a while loop to count characters until the null terminator
    while (ch[length] != '\0') {
        length++;
    }
    return length;  // Return the total length
}

int main() {
    char ch[100];  // Character array to hold the input string
    cout << "Enter the value: ";
    cin.getline(ch, 100);  // Read input string including spaces

    // Call the findLength function to calculate the length
    int len = findLength(ch);
    cout << "Length of string is: " << len << endl;  // Output the length
    return 0;
}

