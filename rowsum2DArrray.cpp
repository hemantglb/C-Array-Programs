#include<bits/stdc++.h>
using namespace std;
void printrowwisesum(int arr[][3], int rows,int cols){
  for(int i=0; i<rows; i++){
    int sum=0;
    for(int j=0; j<cols; j++){
        sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
  }
}
int main(){
  int arr[3][3];
  int rows=3;
  int cols=3;
  // row wise input
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin>>arr[i][j];
    }
    cout<<endl;
  }

  printrowwisesum(arr,rows,cols);
}