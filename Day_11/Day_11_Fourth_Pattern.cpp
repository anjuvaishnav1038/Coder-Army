//---Day-11-Fourth Pattern---//
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    //space
    for(int j=n-i;j>=0;j--){
      cout<<" ";
    }
    //star
    for(int k=1;k<=i;k++){
      cout<<"* ";
    }
    cout<<endl;
  }
  //second
  for(int i=n;i>0;i--){
    //space
    for(int j=n-i;j>=0;j--){
      cout<<" ";
    }
    //star
    for(int k=1;k<=i;k++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}