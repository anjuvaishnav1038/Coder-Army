//-----Day-10-Second Pattern----//
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
      char p=i-1+'A';
      cout<<p;
    }
    cout<<endl;
  }
  return 0;
}