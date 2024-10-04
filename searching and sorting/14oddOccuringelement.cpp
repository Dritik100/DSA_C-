// #include<iostream>
// using namespace std;

// int findOddOccuringElement(int arr[], int n) {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
    
//     while (s <= e) {
//        //single case 
//         if (s == e) {
//             return s; 
//         }

        

//         // Check if the mid is even or odd
//         if (mid % 2 == 0) {
//             // If the element at mid is the same as the next element
//             if (arr[mid] == arr[mid + 1]) {
//                 // Move to the right half
//                 s = mid + 2;
//             } else {
//                 // Move to the left half
//                 e = mid;
//             }
//         } else {
//             // If mid is odd, compare with the previous element
//             if (arr[mid] == arr[mid - 1]) {
//                 // Move to the right half
//                 s = mid + 1;
//             } else {
//                 // Move to the left half
//                 e = mid - 1;
//             }
//         }
//     }

//     // If no odd occurring element is found (which shouldn't happen with correct input)
//     return -1;
// }

// int main() {
//     int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9, 9};
//     int n = 17;

//     int ans = findOddOccuringElement(arr, n);
    
//     if (ans != -1) {
//         cout << "The odd occurring element is: " << ans << endl;
//     } else {
//         cout << "No odd occurring element found." << endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int findOddoccuringElement(int arr[], int n){
  int s=0;
  int e= n-1;
  int mid= s+(e-s)/2;

  while(s<=e){
    //single element
    if(s==e){
      return s;
    }

    //mid --> check even or odd
    if(mid & 1){//mid--> true
       if(mid-1 >=0 && arr[mid]== arr[mid-1]){
        //right
        s=mid+1;
       }
       else{
        //left
        e=mid-1;
       }   
    } 
    else{
      //even
      if(mid+1 <=n && arr[mid]==arr[mid+1]){
        //right me jao
        s=mid+2;
      }
      else{
        //ya to main right part par khada hu
        //ya to main ans k upper khada hu
        //that's why e=mid kar raha hu
        //kyuli e=mid-1; se ans lost ho skta hai
        e=mid;
      }
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
int main(){
  int arr[]={1,1,2,2,3,3,4,4,6,6,7,7,10};
  int n=13;
  int ansIndex= findOddoccuringElement(arr,n);
  cout<<"Final ans is: "<<arr[ansIndex]<<endl;
  return 0;
}