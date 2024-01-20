//---day 18 ->program==6
#include<iostream>
using namespace std;
int fact(int n){
  if(n<=0){
    return 1;
  }
  int prod=1;
  for(int i=2;i<=n;i++){
    prod=prod*i;
  }
  return prod;
}
int main(){
  int n,r;
  cout<<"enter n and r"<<endl;
  cin>>n>>r;
  cout<<fact(n)/(fact(r)*fact(n-r));
  return 0;
}