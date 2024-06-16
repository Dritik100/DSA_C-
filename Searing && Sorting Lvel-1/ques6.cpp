//Positve divde ke liye

#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(mid * divisor==dividend){
            return mid;
        }
       else  if(mid * divisor < dividend){
            //ans store
            ans=mid;
            //rigth jao
            s=mid+1;
        }
        else{
            //left jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){

    int divisor=7;
    int dividend=48;

    int ans=getQuotient(divisor,dividend);
    cout<<"Final Answer is:"<<ans<<endl;
    return 0;
}