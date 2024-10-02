// #include<iostream>
// using namespace std;
// bool  search2DArray(int arr[][3],int i,int j,int target){
//   int s=0;
//   int e= i*j-1;
//   int  mid=s+(e-s)/2;
//   while(s<=e){
//     int i= mid/j;
//     int j=mid%j;
//     if(arr[i][j]==target){
//       return true;
//     }
//     else if(arr[i][j] <target){
//       s=mid+1;
//     }
//     else{
//       e=mid-1;
//     }
//   }
//   return false;
// }

// int main(){
//   int arr[3][3]= {
//         {1, 3, 5},
//         {10, 11, 16},
//         {23, 30, 34},
//     };

//   int target=34;
//   if(search2DArray(arr,3,3,target)){
//     cout<<"Target "<<target<<"found in the matrix."<<endl;
//   }
//   else{
//      cout << "Target " << target << " not found in the matrix." << endl;
//   }
//   return 0;
// }

#include<iostream>
using namespace std;

bool search2DArray(int arr[][3], int rows, int cols, int target) {
    int s = 0;
    int e = rows * cols - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Calculate row and column from mid index
        int row = mid / cols;
        int col = mid % cols;

        if (arr[row][col] == target) {
            return true;  // Target found
        }
        else if (arr[row][col] < target) {
            s = mid + 1;  // Search right half
        }
        else {
            e = mid - 1;  // Search left half
        }
    }

    return false;  // Target not found
}

int main() {
    int arr[3][3] = {
        {1, 3, 5},
        {10, 11, 16},
        {23, 30, 34}
    };

    int target = 34;

    if (search2DArray(arr, 3, 3, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    }
    else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
