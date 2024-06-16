// transpose in 2d matrix 

#include <iostream>

using namespace std;

void printArray(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = i; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 70, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int row = 4;
    int col = 4;

    cout << "Printing before transpose:" << endl;
    printArray(arr, row, col);

    cout << "Doing transpose:" << endl;
    transpose(arr, row, col);

    cout << "Printing after transpose:" << endl;
    printArray(arr, row, col);

    return 0;
}
