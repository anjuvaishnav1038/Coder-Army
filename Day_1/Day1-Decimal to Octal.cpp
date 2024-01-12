//------Decimal to Octal conversion------//
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the Number "<<endl;
  cin>>n;
  int power=1;
  int ans=0;
  while(n>0)
  {
    int digit=n%8;         
    cout<<digit<<" ";
    ans+=digit*power;
    n=n/8;
    power=power*10;

  }
  cout<<endl;
  cout<<ans;
  return 0;
  }