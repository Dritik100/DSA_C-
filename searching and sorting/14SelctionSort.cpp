#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1; j<n;j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    //swap the foud minimum element with the current element

    int temp= arr[minIndex];
    arr[minIndex]= arr[i];
    arr[i]= temp;
   
  }
  
}

int main(){
  int arr[]= {64,25,12,22,11};
  int n=5;

 selectionSort(arr,n);
  //output the sorted array

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}