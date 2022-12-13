#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string j,f,m,ap,my,ju,jl,au,sp,o,n,d;
    for(int i=0;i<s.length();i++){
    if(s[i]=='f')
         cout<<"28\n";
    
    else if((s[i]=='a'&&s[i+1]=='p') || (s[i]=='j'&&s[i+1]=='u' )|| s[i]=='o' || s[i]=='n'){
        cout<<"30\n";
        break;
    }
    else
           cout<<"31\n";

    }
    return 0;
}
