// Reverse in array

#include<iostream>
#include<limits.h>
using namespace std;

void reverseArray(int arr[], int size){
    int left=0;
    int right=size-1;

    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
   int arr[]={10,8,43,23,12,45,46};
   int size=7;
   reverseArray(arr,size);

 
return 0;
    
}