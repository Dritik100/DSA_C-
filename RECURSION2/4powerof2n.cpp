#include <iostream>
using namespace std;

int pow(int n) {
  // Base case
  if (n == 0) {
    return 1;
  }
  
  // Recursive call
  int ans = 2 * pow(n - 1);
  return ans;
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  
  int result = pow(n);  // Store the result of pow(n)
  cout << result << endl;  // Print the result
  
  return 0;
}
