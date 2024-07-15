#include <iostream>
using namespace std;

int binSearch(int arr[], int s, int e, int target) {
    // Base case
    if (s > e) {
        return -1;
    }
    // Processing
    int mid = s + (e - s) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    // Recursion
    if (arr[mid] < target) {
        // Search in the right half
        s=mid+1;
        int aageKaAns=binSearch(arr, s, e, target);
        // return binSearch(arr, mid + 1, e, target);
    } else {
        // Search in the left half
        e=mid-1;
        int aageKaAns=  binSearch(arr, s, e, target);
        return aageKaAns;
        // return binSearch(arr, s, mid - 1, target);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size =8;
    int start = 0;
    int end = size - 1;
    int target = 80;

    int foundIndex = binSearch(arr, start, end, target);

    if (foundIndex != -1) {
        cout << "Target found at: " << foundIndex << endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}
