#include<iostream>
using namespace std;
void fibonacciSeries(int arr[],int n){
  arr[0]=0;

  arr[1]=1;

  for(int i=2;i<n;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }
}
int main(){
  int n;
  cout<<"Enter the number of fibonnaci terms:";
  cin>>n;
  int fibonaci[n];
  fibonacciSeries(fibonaci,n);

  for(int i=0;i<n;i++){
    cout<<fibonaci[i]<<" ";
  }

}