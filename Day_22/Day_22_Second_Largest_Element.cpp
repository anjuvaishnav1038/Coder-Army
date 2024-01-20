//---Program for Second Largest Element in the array--//
#include<iostream>
using namespace std;
int main(){
  int largest=-1;
  int secondlargest=-1;
int n;
cout<<"Enter the size of an Array "<<endl;
cin>>n;
int arr[100];
cout<<"Enter the array Elements"<<endl;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"Showing the entered Array"<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
 if(largest<arr[i]){
  largest=arr[i];
 }
 else if(arr[i]!=largest && secondlargest<arr[i]){
  secondlargest=arr[i];
 }
}
cout<<"secondlargest is "<<secondlargest<<endl;
return 0;
}