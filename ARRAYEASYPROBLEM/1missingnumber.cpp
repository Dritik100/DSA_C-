#include<iostream>
using namespace std;
int missingNumber(int arr[], int n){
  int sum=0;
  int ans=(n*(n+1))/2;
  for(int i=0;i<n-1;i++){
    sum=sum+arr[i];
  }
  return ans-sum;
}
int main(){
  int arr[]={1,2,3,4,6};
  int n=6;
  cout<<"Missing number is :"<<missingNumber(arr,n);
  return 0;
  
}