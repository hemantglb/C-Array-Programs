#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={0,1,0,3,12};
    vector<int> brr;
    int zeros=0;
    for(int i=0; i<5; i++){
        if(arr[i]==0){
            zeros++;
        }
    }
    for(int i=0; i<5; i++){
        if(arr[i]!=0){
            brr.push_back(arr[i]);
        }
    }
    for(int i=0; i<zeros; i++){
        brr.push_back(0);
    }
    for(int i=0; i<5; i++){
        cout<<brr[i];
    }
}

