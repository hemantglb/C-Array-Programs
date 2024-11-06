#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,1,2,2};
    int size=5;
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==2){
            count++;
        }
    }
    cout<<count;
    return 0;
}