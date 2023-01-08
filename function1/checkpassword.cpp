#include<bits/stdc++.h>
using namespace std;
string s;
void checkPassword(string s){
    int i,n=8;
    bool isDigit=false,isUpper=false,isLower=false;
    for(i=0;i<n;i++){
        if(isdigit(s[i])){
        isDigit=true;}
        if(isupper(s[i])){
        isUpper=true;}
        if(islower(s[i])){
            isLower=true;}
        }
        if(isDigit && isUpper && isLower){
            cout<<"good password\n";
        }
        else
            cout<<"not good password";

 //   return s;
}
int main(){
    //string s;
    cin>>s;
    checkPassword(s);
    return 0;
}
