#include<iostream>
using namespace std;

int searchNearlySorted(int arr[], int n, int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;;

    while(s <= e) {
        

        // Check if the middle element is the target
        if(arr[mid] == target) {
            return mid;
        }

        // Check if the target is at mid-1, ensuring mid-1 is in bounds
        if(mid - 1 >= 0 && arr[mid - 1] == target) {
            return mid - 1;
        }

        // Check if the target is at mid+1, ensuring mid+1 is in bounds
        if(mid + 1 <= e && arr[mid + 1] == target) {
            return mid + 1;
        }

        // If target is greater, ignore the left half
        if(target > arr[mid]) {
            s = mid + 2;  // Move 2 positions to the right
        }
        // If target is smaller, ignore the right half
        else {
            e = mid - 2;  // Move 2 positions to the left
        }
        mid=s+(e-s)/2;
    }

    // If the target is not found
    return -1;
}

int main() {
    int arr[] = {20, 10, 30, 50, 40, 70, 60};  // Nearly sorted array
    int n = 7;
    int target = 60;

    int targetIndex = searchNearlySorted(arr, n, target);
    if(targetIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element Found at index: " << targetIndex << endl;
    }
    return 0;
}