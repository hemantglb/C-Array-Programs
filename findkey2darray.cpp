#include<bits/stdc++.h>
using namespace std;

bool findkey(int arr[][3],int rows, int cols, int key){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]== key)
                return true;
        }
    }
    return false;
}

void printcolwisesum(int arr[][3], int rows,int cols){
  for(int i=0; i<rows; i++){
    int sum=0;
    for(int j=0; j<cols; j++){
        sum=sum+arr[j][i];
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

//   printcolwisesum(arr,rows,cols);
//   findkey(arr,rows,cols,key);
    int key;
    cin>>key;
    if(findkey(arr,rows,cols,key)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}