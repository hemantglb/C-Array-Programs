#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,3,4,4,5};
    int x;
    for(int i=0; i<5; i++){
       for(int j=i+1; j<5; j++){
           if(arr[i]==arr[j]){
               cout<<arr[i];
           }
       }
    }
}