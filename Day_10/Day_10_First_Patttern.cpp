//-----Day-10-First Pattern----//
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    //space
    for(int s=n-i;s>0;s--){
      cout<<" ";
    }
    //number
    for(int j=i;j>=1;j--){
      cout<<j;
    }
    cout<<endl;
  }
  return 0;
}