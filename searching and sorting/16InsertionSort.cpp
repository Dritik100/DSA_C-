#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i = 1; // Start from the second element
    while (i < n) {
        int key = arr[i]; // Current element to be compared
        int j = i - 1;

        // Compare key with previous elements and shift elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key at the correct position
        i++; // Move to the next element
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
//t.c----> a.c=O(n^2);
  //  -----> b.c=O(n);
  //-------> w.c=o(n^2);