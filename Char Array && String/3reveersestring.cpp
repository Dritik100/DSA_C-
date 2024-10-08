#include <iostream>
using namespace std;

// Function to find the length of a character string
int findLength(char ch[]) {
    int length = 0;
    while (ch[length] != '\0') {
        length++;
    }
    return length;  // Return the total length
}

// Function to reverse the string
void findReverse(char ch[], int n) {
    int i = 0; 
    int j = n - 1;
    while (i < j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main() {
    char ch[100];
    cout << "Enter a string: ";
    cin.getline(ch, 100);  // Read input string including spaces
    
    cout << "Before string: " << ch << endl;  // Output the original string
    
    int len = findLength(ch);  // Calculate the length of the string
    findReverse(ch, len);  // Reverse the string
    
    cout << "After string: " << ch << endl;  // Output the reversed string
    return 0;
}
