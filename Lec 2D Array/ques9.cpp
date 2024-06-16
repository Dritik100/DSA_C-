// diagonal wise sum

//  #include<iostream>
//  using namespace std;
    
//  int diagonalwiseSum(int arr[][4], int size){
//     int sum=0;
//     for(int i=0;i<row;i++){
//        sum=sum+arr[i][j];
//     }
//     cout<<sum<<endl ;
   
   
//  }
 
//  int main(){
//  int arr[4][4]={
//                     {1,2,3,4},
//                     {5,6,70,8},
//                     {9,10,11,12},
//                     {12,13,14,15},
//                     };

//     int row=4;
//     int col=4;
//    diagonalwiseSum(arr,row,col);
//     return 0;
// }     

#include <iostream>

#define SIZE 3  // Define the size of the 2D array (NxN)

void printDiagonalSums(int arr[SIZE][SIZE], int n) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        mainDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - 1 - i];
    }

    std::cout << "Sum of the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << std::endl;
}

int main() {
    int arr[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printDiagonalSums(arr, SIZE);

    return 0;
}
 
