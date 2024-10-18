#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

// Function to find LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // LCM formula using GCD
}

int main() {
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;

    int lcm_ans = lcm(a, b);  // Call the lcm function and store the result
    cout << "The LCM of " << a << " & " << b << " is: " << lcm_ans << endl;  // Print the LCM result

    return 0;
}
