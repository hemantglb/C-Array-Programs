// row wise printing 2D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
  // declare 2D Array
  int arr[3][3];
  // initialised 2D Array
  int brr[3][3]={{1,2,3},{4,5,6}, {7,8,9}};

  // row wise print
  // outer loop
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
}

// Col wise printing 2D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
  // declare 2D Array
  int arr[3][3];
  // initialised 2D Array
  int brr[3][3]={{1,2,3},{4,5,6}, {7,8,9}};

  // row wise print
  // outer loop
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<brr[j][i]<<" ";
    }
    cout<<endl;
  }
}


// row wise input in 2D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
  // declare 2D Array
  int arr[3][3];
  // input 2D array
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin>>arr[i][j];
    }
    cout<<endl;
  }

//   printing row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// col wise input in 2D Array and printing
#include<bits/stdc++.h>
using namespace std;
int main(){
  // declare 2D Array
  int arr[3][3];
  // input 2D array
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin>>arr[j][i];
    }
    cout<<endl;
  }

//   printing col wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}