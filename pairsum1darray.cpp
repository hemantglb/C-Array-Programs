#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=9;
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]+arr[j]==x){
                cout<<"true";
            }
        }
    }
}
