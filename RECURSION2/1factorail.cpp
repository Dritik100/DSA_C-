#include<iostream>
using namespace std;
int factorial(int n){

  //base case
  if(n==1){
    return 1;
  }
  if(n==0){
    return 1;
  }
  

  //recursive realtion
   int recursiveKaAns= factorial(n-1);

   //processing
   int finalAns= n * recursiveKaAns;
   return finalAns;
   

}
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;


 cout<<factorial(n)<<endl;
  return 0;
}