#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    //inner loop
    for(int j=0; j<n-i-1;j++){
      if(arr[j] > arr[j+1]){
        int temp=arr[j];
        arr[j]= arr[j+1];
        arr[j+1]=temp;
      }
    }

  }
}

int main(){
  int arr[]= {64, 34, 25, 12, 22, 11, 90};
  int n=7;
   bubbleSort(arr,n);

   //sorted print
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
  return 0;
}

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        // Flag to check if swapping happens
        bool swapped = false;

        // Inner loop for comparison of adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the left element is greater than the right element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swapping happened, break as the array is already sorted
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
