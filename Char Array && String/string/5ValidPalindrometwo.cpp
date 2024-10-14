#include <iostream>
#include <string>
using namespace std;

 bool checkPalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i]!= s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j= s.length()-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                //s[i]!=s[j]
                //1 removal allowed
                //check plaindrome for remaning string after removal

                // ith charcter --> remove

                bool ans1= checkPalindrome(s, i+1,j);
                //jth character --> remove
                bool ans2= checkPalindrome(s,i,j-1);

                return ans1 || ans2;
            }
        }
        //iska matalb valid palindrome hai
        //iska matlab --> 0 removal

        return true;
        
    }

int main() {
    string input;
    
    cout << "Enter a string: ";
    cin >> input;

    if (validPalindrome(input)) {
        cout << "The string can be a valid palindrome." << endl;
    } else {
        cout << "The string cannot be a valid palindrome." << endl;
    }

    return 0;
}

//time compexity-->

