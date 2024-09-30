#include <iostream>
using namespace std;
int findMissingNo(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    int diff = arr[mid] - mid;
    if (diff == 1)
    {
      // riht me jana hai
      s = mid + 1;
    }
    else
    {
      // ans store
      ans = mid;
      // left me jana hai
      e = mid - 1;
    }
    mid=s+(e-s)/2;
  }
  return ans + 1;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
  int n = 8;
  cout << "The missing number is:" << findMissingNo(arr, n);
  return 0;
}