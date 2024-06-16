// #include<iostream>
// using namespace std;


//  void maxNumber(int num1, int num2, int num3){
//     if(num1>=num2&&num2>=num3){
//         cout<<"maximum is :"<<num1<<endl;
//     }
//     else if(num2>=num1&& num2>=num3){
//         cout<<"Maximum number is:"<<num2<<endl;
//     }
//     else{
//         cout<<"Maximum number is:"<<num3<<endl;
//     }
        
//     }

// int main(){
//    maxNumber(111,21,3);
//     return 0;
// }


#include<iostream>
using namespace std;


 int printMax(int n1, int n2 ,int n3){
   int ans1=max(n1,n2);
   int finalAns= max(ans1,n3);
   return finalAns;
 }
int main(){
  int maximum= printMax(111,21,3);
  cout<<"Maximum is"<<maximum<<endl;
    return 0;
}