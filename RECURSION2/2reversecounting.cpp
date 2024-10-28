#include <iostream>
using namespace std;

void counting(int n) {
  // Base case
  if (n == 1) {
    cout << 1 << " ";
    return;
  }
  
  // Processing
  cout << n << " ";
  
  // Recursive call
  counting(n - 1);
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  counting(n);
  
  return 0;
}


// #include <iostream>
// using namespace std;

// void counting(int n) {
//   // Base case
//   if (n == 1) {
//     cout << 1 << " ";
//     return;
//   }

//    // Recursive call
//   counting(n - 1);
  
//   // Processing
//   cout << n << " ";
  
 
// }

// int main() {
//   int n;
//   cout << "Enter the number: ";
//   cin >> n;
//   counting(n);
  
//   return 0;
// }



