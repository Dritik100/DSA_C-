#include<iostream>
using namespace std;

int squareRoot(int num) {
    int s = 0;
    int e = num;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (mid * mid == num) {
            return mid; // If mid*mid is the perfect square
        }
        else if (mid * mid < num) {
            ans = mid;  // Update ans with the closest value so far
            s = mid + 1; // Move to the right half
        }
        else {
            e = mid - 1; // Move to the left half
        }
        mid = s + (e - s) / 2;
    }

    return ans; // Return the closest integer square root
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = squareRoot(num);
    cout << "The integer square root of " << num << " is " << result << endl;

    return 0;
}
