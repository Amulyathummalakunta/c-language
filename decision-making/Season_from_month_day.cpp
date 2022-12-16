#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    int n;
    cout<<"enter the number:";
    cin>>n;
   if(s == "January") cout<<"Winter\n";
   else if(s == "February") cout<<"Winter\n";
   else if(s == "March"){
       if(n<20) cout<<"Winter\n";
       else cout<<"Spring\n";
   }
   else if(s == "April") cout<<"Spring\n";
   else if(s=="May")cout<<"Spring\n";
   else if(s=="June"){
       if(n>=21)cout<<"Summer\n";
       else cout<<"Spring\n";
   }
   else if(s == "July") cout<<"Summer\n";
   else if(s=="August")cout<<"Summer\n";
   else if(s=="September"){
       if(n>=22)cout<<"Fall\n";
       else cout<<"Summer\n";
   }
    else if(s == "October") cout<<"Fall\n";
   else if(s=="November")cout<<"Fall\n";
   else if(s=="December"){
       if(n>=21)cout<<"Winter\n";
       else cout<<"Fall\n";}
    return 0;
}
