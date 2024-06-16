// find colwise sum print
 
 #include<iostream>
 using namespace std;
    
 int colwiseSum(int arr[][4], int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl ;
    }
   
   
 }
 
 int main(){
 int arr[3][4]={
                     {1,2,3,4},
                    {5,6,70,8},
                    {9,10,11,12}
                    };

    int row=3;
    int col=4;
   colwiseSum(arr,row,col);
    return 0;
}     