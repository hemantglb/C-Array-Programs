#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[5]={1,2,3,4,5};
  int size=5;
  int maxnum=INT_MIN;
  for(int i=0; i<size; i++){
    if(arr[i]>maxnum){
      maxnum=arr[i];
    }
  }
  cout<<maxnum;
  return 0;
}