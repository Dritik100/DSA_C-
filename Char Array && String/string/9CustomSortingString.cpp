#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string customSortString(string order, string s) {
    // Custom comparator to sort characters in 's' based on their positions in 'order'
    auto compare = [&](char char1, char char2) {
        // Find the position of char1 and char2 in the 'order' string
        int pos1 = order.find(char1);
        int pos2 = order.find(char2);
        
        // If the character is not found in 'order', assume its position as large (i.e., place it later)
        if (pos1 == string::npos) pos1 = order.size();
        if (pos2 == string::npos) pos2 = order.size();

        // Return true if pos1 should come before pos2
        return pos1 < pos2;
    };

    // Sort the string 's' based on the custom comparator
    sort(s.begin(), s.end(), compare);

    return s;
}

int main() {
    string order = "cba";
    string s = "abcd";

    string result = customSortString(order, s);
    
    cout << "Sorted string: " << result << endl;

    return 0;
}
