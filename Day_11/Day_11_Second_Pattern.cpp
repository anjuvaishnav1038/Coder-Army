//---second-Pattern---//
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=n-i;j>=0;j--){
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<j;
    }
    cout<<endl;
  }
  return 0;
}