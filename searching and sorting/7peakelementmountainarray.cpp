#include<iostream>
using namespace std;
int peakMountArray(int arr[],int n){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  
  while(s<e){
    
    
    if(arr[mid]<arr[mid+1]){
      //A wali line me hu
      //peak right me exist karta hai
      s=mid+1;
    }
    else{
      //ya to mai B line pr hu 
      //ya toh main peak Element pr hu
      e=mid;
    }
  mid=s+(e-s)/2;
  }
  return arr[s];

}
int main(){
  int arr[]={10,20,50,40,30};
  int n=5;
  cout<<"Peak INdex is: "<<peakMountArray(arr,n);
  return 0;
}