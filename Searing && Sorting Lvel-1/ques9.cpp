#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,23,2,5,14,32,22,11};
    int n=arr.size();

    for(int round=0;round<n-1;round++){
        int swapCount=0;
        for(int j=0; j<n-round-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapCount++;
            }
            
        }
        if(swapCount==0){
                //sort ho chuka hai, no need to check in future rounds
                break;
            }
    }
// printing number
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}