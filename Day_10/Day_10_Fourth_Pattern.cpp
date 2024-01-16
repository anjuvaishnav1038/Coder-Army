//-----Day-10-Fourth Pattern----//
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    char c='E';
    //space
    for(int s=n-i;s>0;s--){
      cout<<" ";
    }
    //number
    for(int j=i;j>=1;j--){
      cout<<c;
      --c;
    }
    cout<<endl;
  }
  return 0;
}