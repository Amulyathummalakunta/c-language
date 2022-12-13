#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n>=380 && n<450){
      cout<<"Violet";
  }
  else if(n>=450 && n<495){
      cout<<"Blue";
  }
  else if(n>=495 && n<570){
      cout<<"Green";
  }
  else if(n>=570 && n<590){
      cout<<"Yellow";
  }
  else if(n>=590 && n<620){
      cout<<"Orange";
  }
  else{
      cout<<"Red";
  }
    return 0;
