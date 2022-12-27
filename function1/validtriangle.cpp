#include<bits/stdc++.h>
using namespace std;
int ValidTriangle(int a,int b,int c){
    cin>>a>>b>>c;
    if(a>=(b+c) || b>=(a+c) || c>=(a+b)){
       return false;
    }
    else
        return true;
}
int main(){
    int a,b,c;
    
    if(ValidTriangle( a, b, c)){
         cout<<" validtriangle";
    }
    else
    cout<<"not a valid Triangle:";
    return 0;
    
}
