// Extream print array


#include<iostream>
#include<limits.h>
using namespace std;

void Extreamprint(int arr[],int size){
    int left=0;
    int right=size-1;

    while(left<=right){
        if(left==right){
            cout<<arr[left]<<endl;
        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}





int main(){
   int arr[]={10,8,43,23,12,45,46};
   int size=7;
   Extreamprint(arr,size);

 
return 0;
    
}