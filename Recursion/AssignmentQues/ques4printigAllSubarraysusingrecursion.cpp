#include<iostream>
#include<vector>
using namespace std;

void printSubarray_util(vector<int> &nums, int start,int end){
    //base case
    if(end==nums.size()){
        return;
    }

    //Processing
    for(int i=start; i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    //Recursive Relation
    printSubarray_util(nums,start,end+1);
}

void printSubarray(vector<int>&nums){
    for(int start=0; start<nums.size(); start++){
        int end=start;
        printSubarray_util(nums, start,end);
    }
}
int main(){
    vector<int>nums{10,11,12,13,14};
    printSubarray(nums); 
    return 0;
}