#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void solve(int arr[], int size, int index, vector<int> &ans){
    //base case
    if(index>=size){
        return;
    }
    //processing
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
    // Recursion Relation

    solve(arr, size,index+1, ans);
}
int main(){
    int arr[]= {11,12,13,14,15};
    int size=5;
    int index=0;
    vector<int>ans;
    solve(arr,size,index,ans);

    //printing vector
    for(int nums:ans){
        cout<<nums<<" "; 
    }
    return 0;
}
