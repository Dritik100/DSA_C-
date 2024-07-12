#include<iostream>
using namespace std;
void printArray(int arr[], int size, int index){
    //base case
    if(index >= size){
        return;
    }
    //processing
    cout<<arr[index]<<" ";
    // recursive relation
    printArray(arr,size,index+1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    printArray(arr,size,index);
    return 0;
}

//revsere 
#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
    // Base case
    if(index >= size){
        return;
    }
   
    // Recursive relation
    printArray(arr, size, index + 1);

    // Processing
    cout << arr[index] << " ";
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    printArray(arr, size, index);
    return 0;
}