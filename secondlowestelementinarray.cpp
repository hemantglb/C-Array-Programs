#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int mini=INT_MAX;
    int mini2=INT_MAX;
    for(int i=0; i<5; i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    for(int i=0; i<5; i++){
        if(arr[i]<mini2 && arr[i]!=mini){
            mini2=arr[i];
        }
    }
    cout<<mini<<endl;
    cout<<mini2;
}