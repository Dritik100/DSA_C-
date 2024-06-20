#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={7,1,-7,-17,70,190,17,102,-250,25};
    int n=sizeof (arr)/sizeof (arr[0]);
    int min=INT_MAX;
    int max=INT_MIN;
    int minIndex=-1;
    int maxIndex=-1;
    

    for(int i=0; i<n;i++){
        if(arr[i]< min){
            min=arr[i];
            minIndex=i;
        }
        if(arr[i]> max){
            max=arr[i];
            maxIndex=i;
        } 
        
    }
    cout<< "Smallest number in arry: " <<min <<  "and it's Indexs"<<minIndex<<endl;
    cout<< "largest number in array: " <<max <<  "and it's Indexs"<<maxIndex<<endl;


    return 0;

}