#include <iostream>
#include <vector>

// Function to find the first occurrence of the target
int firstOccurrence(const std::vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;  // Store the index of found element
            high = mid - 1; // Keep searching on the left side
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of the target
int lastOccurrence(const std::vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;  // Store the index of found element
            low = mid + 1; // Keep searching on the right side
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to calculate the total number of occurrences
int totalOccurrences(const std::vector<int>& arr, int target) {
    int first = firstOccurrence(arr, target);
    if (first == -1) {
        return 0; // If the element is not found
    }
    int last = lastOccurrence(arr, target);
    return last - first + 1;
}

int main() {
    std::vector<int> arr = {1, 2, 4, 4, 4, 5, 6, 7};
    int target = 4;

    int total = totalOccurrences(arr, target);
    if (total > 0) {
        std::cout << "Total occurrences of " << target << " is " << total << std::endl;
    } else {
        std::cout << target << " not found in the array" << std::endl;
    }
    return 0;
}
 