#include<iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
  int s=0;
  int e=dividend;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e){
    if(mid * divisor == dividend){
      return mid;
    }
    else if(mid * divisor < dividend){
      //ans store
      ans=mid;
      //right me jate the
      s=mid+1;
    }
    else{
      //left me jao;
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}


int main(){
  int divisor;
  cout << "Enter divisor: ";
  cin>>divisor;

  int dividend;
  cout << "Enter dividend: ";
  cin >> dividend;

  int n=-5;
  cout<< abs(n)<<endl;
  int ans=getQuotient(abs(divisor),abs(dividend));

//noe we need to decide k sign konsa lagaye +ve ya -ve


  if ((divisor> 0 && dividend <0) || (divisor < 0 && dividend > 0)){
  ans=0-ans;
 }


  cout<< "Final answer is: "<<ans<<endl;
  return 0;
}