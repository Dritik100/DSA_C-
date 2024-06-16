//minimum number in array

#include<iostream>
#include<limits.h>
using namespace std;

int findMinMaxArr(int arr[], int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
             minAns=arr[i];
        }
       
    }
    return minAns;
}



int main(){
   int arr[]={10,8,43,23,12,45,56,1,5};
   int size=9;
   int minArr=findMinMaxArr(arr,size);
   cout<<"Minimum Number of Array is:"<<minArr<<endl;
 
return 0;
    
}