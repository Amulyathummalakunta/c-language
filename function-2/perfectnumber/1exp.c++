#include<bits/stdc++.h>
using namespace std;
void isPerfect(int n){
    int i,r;
    int sum=0;
    for(i=1;i<n;i++){
         
        if(n%i==0){
            sum+=i;
        }
        
       
    }
    if(sum==n){
        cout<<"true";
    }
    else
        cout<<"flase";
}
int main(){
    int n;
    cin>>n;
    isPerfect(n);
    return 0;
}
