#include<iostream>
using namespace std;
// void solve(int arr[], int size)
void solve(int *arr, int size){
  // cout<<"Size of array inside solve function: "<<sizeof(arr)<<endl;
  cout<<"Inside solve --> arr: "<<arr<<endl;
  cout<<"Inside solve -->&arr:  "<<&arr<<endl;

}
int main(){

  int arr[]={10,20,30,40,50};
  // cout<<"Size of array: "<<sizeof(arr)<<endl;
  solve(arr,5);
  cout<<"Inside main --> arr: "<<arr<<endl;
  cout<<"Inside main -->&arr: "<<&arr<<endl;
  return 0;
}