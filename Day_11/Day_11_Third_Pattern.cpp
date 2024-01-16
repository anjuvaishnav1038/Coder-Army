//---Third-Pattern---//
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
// loop to print characters in the increasing order
for(int j=1;j<=i;j++){
  cout<<(char)(j-1+'A');
}
//loops for print characters in decreasing order (exluding the last character )
for(int j=i-1;j>=1;j--){
  cout<<(char)(j-1+'A');
}
    cout<<endl;
  }
  return 0;
}