#include<iostream>
using namespace std;
void doubleArr(int arr[], int size, int index){
    //base case
    if(index>=size){
        return;
    }
    //processing
    arr[index]=2*arr[index];
    //recursive relation
    doubleArr(arr, size , index+1);
}
int main(){
    int arr[]={10,20, 30, 40 ,50};
    int size=5;
    int index=0;
   doubleArr(arr, size, index);
     // Printing the doubled array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

