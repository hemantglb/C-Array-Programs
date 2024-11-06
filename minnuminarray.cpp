#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int minnum=INT_MAX;
    for(int i=0; i<size; i++){
      if(arr[i]<minnum){
        minnum=arr[i];
      }
    }
  cout<<minnum;
  return 0;
}