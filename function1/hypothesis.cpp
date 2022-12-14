#include<bits/stdc++.h>
using namespace std;
int getHypotenus(int l1,int l2){
     int hyp;
 
    hyp=sqrt(l1*l1+l2*l2);
    return hyp;
}
int main(){
    int l1,l2;
       cin>>l1>>l2;
       
    cout<<getHypotenus(l1,l2)<<"";
    return 0;
}
