// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[]={7,1,-7,-17,70,190,17,102,-250,25};
//     int n=sizeof (arr)/sizeof (arr[0]);
//     int min=INT_MAX;
//     int max=INT_MIN;
//     int minIndex=-1;
//     int maxIndex=-1;
    

//     for(int i=0; i<n;i++){
//         if(arr[i]< min){
//             min=arr[i];
//             minIndex=i;
//         }
//         if(arr[i]> max){
//             max=arr[i];
//             maxIndex=i;
//         } 
        
//     }
//     cout<< "Smallest number in arry: " <<min <<  " and it's Indexs"<<minIndex<<endl;
//     cout<< "largest number in array: " <<max <<  " and it's Indexs"<<maxIndex<<endl;

//     int temp1=arr[minIndex];
//     arr[minIndex]=arr[0];
//     arr[0]=temp1;

//     int temp2=arr[maxIndex];
//     arr[maxIndex]=arr[n-1];
//     arr[n-1]=temp2;

//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;
int main(){

int arr[]={10,29,31,1,2,-2,-4,200,43,-23};
int n=sizeof(arr)/sizeof(arr[0]);

int min=INT_MAX;
int max=INT_MIN;
int smallestIndex=-1;
int largestIndex=-1;
for(int i=0; i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        smallestIndex=i;

    }
    if(arr[i]>max){
        max=arr[i];
        largestIndex=i;
    }
}
cout<<"Smallest nuber in array:"<<min<<" and its index is:"<<smallestIndex<<endl;
cout<<"Largest number in array:"<<max<<" and its index is:"<<largestIndex<<endl;

int temp1=arr[smallestIndex];
arr[smallestIndex]=arr[0];
arr[0]=temp1;


int temp2=arr[largestIndex];
arr[largestIndex]=arr[n-1];
arr[n-1]=temp2;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
