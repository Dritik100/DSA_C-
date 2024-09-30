#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int> arr, int target){
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e){
    if(arr[mid]==target){
      ans=mid;
      e=mid-1;
    }
    else if(target <arr[mid]){
      //left me search
      e=mid-1;
    }
    else if(target > arr[mid]){
      //right me search
      s=mid+1;
    }

    mid=s+(e-s)/2;
  }
  return ans;

}
int main(){

  vector<int>arr={1,2,4,4,4,5 };
  int target=4;

  int ans= firstOcc(arr,target);
  cout<<"ans is:"<<ans<<endl;

  return 0;
}
