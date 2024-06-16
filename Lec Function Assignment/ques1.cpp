// Dispaly area of function
#include<iostream>
using namespace std;
float areaCircle(float radius){
    float area=3.14*radius*radius;
    return area;
}
int main(){
    float radius;
    cin>>radius; 
    float area=areaCircle(radius);
    cout<<"area of circle is:"<<area;
   return 0;
} 