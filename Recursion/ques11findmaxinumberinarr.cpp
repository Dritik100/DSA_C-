#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[], int size,int index, int &maxi){
    //basse case
    if(index>=size){
        return ;
    }
    //processing
    maxi=max(maxi, arr[index]);
    //recursive Relation
    findMax(arr, size,index+1,maxi);
}
int main(){
    int arr[]={10,30,40,80,46};
    int size=5;
    int index=0;
    int maxi=INT_MIN;
    findMax(arr, size, index,maxi);
    //printing maxi value
    cout<<"Maximum value in the aray is:"<<maxi<<endl;
   
}
