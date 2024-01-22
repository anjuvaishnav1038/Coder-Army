//----SELECTION-SORT-On the character Array----//
#include<iostream>
using namespace std;
int main(){
  char arr[100]={'D','A','F','Z'};
  for(int i=0;i<4;i++){
    int index=i;
    for(int j=i+1;j<4;j++){
      if(arr[j]<arr[index]){
        index=j;
      }
    }
    swap(arr[index],arr[i]);
  }
  for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}