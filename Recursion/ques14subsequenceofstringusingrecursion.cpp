#include <iostream>
using namespace std;

void findSubsequence(string str, string output, int index) {
    // Base case
    if (index >= str.length()) {
        cout << "->" << output << endl;
        return; // Add return statement to avoid further recursion
    }
    char ch = str[index];

    //exclude
    findSubsequence(str,output,index+1);
    //include
    output.push_back(ch);
    findSubsequence(str,output,index+1);

    // // Include the current character
    // output.push_back(ch);
    // findSubsequence(str, output, index + 1);

    // // Exclude the current character
    // output.pop_back();
    // findSubsequence(str, output, index + 1);
}

int main() {
    string str = "abc";
    string output = ""; // Start with an empty string
    int index = 0;
    findSubsequence(str, output, index);
    return 0;
}