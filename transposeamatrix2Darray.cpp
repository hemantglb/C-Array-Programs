#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            // swapping
            transposeArr[j][i]=arr[i][j];
        }
    }

}

void printingarray(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
int main(){
  int arr[3][3];
  int rows=3;
  int cols=3;
  //  input elements in array
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin>>arr[i][j];
    }
  }

    cout<<"printing array"<<endl;
    printingarray(arr,rows,cols);
    cout<<"starting transpose"<<endl;
    int transposeArr[3][3];
    transpose(arr,rows,cols,transposeArr);
    cout<<"printing array again"<<endl;
    printingarray(transposeArr,rows,cols);
}