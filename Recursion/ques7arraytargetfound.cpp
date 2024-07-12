#include<iostream>
using namespace std;
bool searchArray(int arr[], int size, int index,int target){
    //base case
    if(index >= size){
        return false;
    }
    if(arr[index]== target){
        return true;
    }

    //recusive call

    bool ans= searchArray(arr,size,index+1, target);
    return ans;
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50 ;
    cout<<"Target found or not:"<<searchArray(arr, size,index, target );
    return 0;
}