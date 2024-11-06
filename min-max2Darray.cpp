#include<bits/stdc++.h>
using namespace std;

int findmax(int arr[][3], int rows, int cols){
    int maxi=INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

int findmin(int arr[][3], int rows, int cols){
    int mini=INT_MAX;    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    // input elements in array
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Max number: "<<findmax(arr,rows,cols)<<endl;
    cout<<"Min number: "<<findmin(arr,rows,cols);

}