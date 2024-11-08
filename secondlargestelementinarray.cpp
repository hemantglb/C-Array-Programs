#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int maxi=INT_MIN;
    int maxi2=INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    for(int i=0; i<5; i++){
        if(arr[i]>maxi2 && arr[i]!=maxi){
            maxi2=arr[i];
        }
    }
    cout<<maxi<<endl;
    cout<<maxi2;
}


// find the first largest and second largest element if largest elements are double
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,4,5,1};
    int maxi=INT_MIN;
    int maxi2=INT_MIN;
    int index=-1;
    for(int i=0; i<5; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            index=i;
        }
    }
    for(int i=0; i<5; i++){
        if(index==i){
            continue;
        }
        if(arr[i]>maxi2){
            maxi2=arr[i];
        }
    }
    cout<<maxi<<endl;
    cout<<maxi2;
}