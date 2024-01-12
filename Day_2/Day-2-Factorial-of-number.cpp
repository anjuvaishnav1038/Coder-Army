#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the Number"<<endl;
  cin>>n;
  int product=1;
  for(int i=1;i<=n;i++){
    product=product*i;
  }
  cout<<"Factorial of the Number is " <<product;
  return 0;
}