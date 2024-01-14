#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  for(int i=0;i<5;i++){
    for(int j=0;j<6;j++){
      char c=(j+5)+'A';
      cout<<c<<" ";
    }
    cout<<endl;
  }
  return 0;
}