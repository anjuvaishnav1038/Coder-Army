//printing all the subbarrays using nested loop
#include<iostream>
using namespace std;
int main(){
  int arr[5]={4,-6,2,8};
  //first loop decides the starting point of the array
  for(int i=0;i<5;i++){
// second loop decides the size of the subbarray
for(int j=i;j<5;j++){
  //third loop will print the all subarrays from i to j
  for(int k=i;k<j;k++){
    cout<<"{"<<arr[k]<<"}"<<" ";
  }
  cout<<endl;
}
  }
  return 0;
}