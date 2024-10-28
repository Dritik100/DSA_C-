#include <iostream>
using namespace std;

void counting(int start, int n) {
  // Base case
  if (start > n) {
    return;
  }
  
  // Processing
  cout << start << " ";
  
  // Recursive call
  counting(start + 1, n);
}

int main() {
  int n;
  cout<<"Enter the number: ";  
  cin>>n;
  counting(1, n);  
  
  return 0;
}