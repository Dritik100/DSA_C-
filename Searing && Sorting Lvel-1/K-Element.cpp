
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        int l = 0, h = arr.size() - 1;
        while (h - l >= k) {
            if (x - arr[l] > arr[h] - x) {
                l++;
            } else {
                h--;
            }
        }
        
        vector<int> ans;
        for (int i = l; i <= h; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPtrMethod(arr, k, x);
    }
};

int main() {
    vector<int> arr{2, 4, 5, 6, 7};
    int k = 2;
    int x = 5;
    
    Solution sol;
    vector<int> ans = sol.findClosestElements(arr, k, x);

    for (auto i : ans) {
        cout << i << endl;
    }
    
    return 0;
}
