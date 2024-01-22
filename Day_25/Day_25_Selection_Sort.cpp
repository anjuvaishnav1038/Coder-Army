/* SELECTION-SORT
Selection Sort works on swapping and finding the minimum element from the array
*/
/* This can be done by finding the index of the smallest element -Ascending order sorting
->Largest number index finding ->descending order sorting */
#include<iostream>
using namespace std;
int main(){
  int arr[100]={2,4,1,0,5};
for(int i=0;i<5;i++){
  int index=i;
  for(int j=i+1;j<5;j++){
    if(arr[j]>arr[index]){
      index=j;
    }
  }
    swap(arr[i],arr[index]);
  }
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
