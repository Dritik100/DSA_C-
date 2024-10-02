#include<iostream>
using namespace std;
int findPivotElement(int arr[], int n){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  int ans=-1;
 

  while(s<e){
    if(s==e){
      return mid;
    }

    else if(arr[mid], arr[mid-1]){
      return arr[mid-1];
    }
    else if(arr[mid]> arr[mid+1]){
      return mid;
    }
    else if(arr[s]> arr[mid]){
      e=arr[mid-1];
    }
    else{
      s=mid+1;
    }
  }
  return ans;
}
int main(){
  int arr[]={12,14,16,2,4,6,8,10};
  int n=8;
  cout<<"Pivot Element is :"<<findPivotElement(arr,n);
  return 0;
}