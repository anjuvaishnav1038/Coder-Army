#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n=37;
  int ans=0;
  int power=1;
  while(n!=0){
    int digit=n%2;//1+0=1
    //0+10*1=10
    //1+10*10=101
    //0+10*101=1010
    ans=ans+digit*power;
    n=n/2;
    power=power*10;
  }
  cout<<ans;
  return 0;
}