#include<iostream>
using namespace std;
void solve(int *arr, int size){
  //  cout<<"size of array inside function: "<<sizeof(arr)<<endl;

  //  cout<<"inside solve -> arr:"<<arr<<endl;

  //   cout<<"inside solve -> arr:"<<&arr<<endl;

  *arr=*arr+1;

   
}

int main(){
  int arr[]={10,20,30, 40,50};
  // cout<<"size of array: "<<sizeof(arr)<<endl;
  solve(arr,5);

  for(int i=0;i<5 ;i++){
    cout<<arr[i]<<endl;
  }

  // cout<<"inside main -> arr:"<<arr<<endl;
  // cout<<"inside main -> arr:"<<&arr<<endl;
  return 0;
}