#include<bits/stdc++.h>
using namespace std;
int main(){
    int amt;
    float bal,bal1,bal2,bal3;
    cout<<"enter the amt";
    cin>>amt;
    bal=0.04*amt+amt;
    bal1=0.04*bal+bal;
    bal2=0.04*bal1+bal1;
    bal3=0.04*bal2+bal2;
    cout<<"entered bal:"<<bal<<"\n"<<"entered bal1:"<<bal1<<"\n"<<"entered ba2:"<<bal2<<"\n"<<"entered ba3:"<<bal3;
    return 0;
}
