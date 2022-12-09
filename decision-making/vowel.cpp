#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++){
    if(s[i]=='a' || s[i] =='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u'){
        cout<<"vowel\n";
    }
        else
            cout<<"consonant\n";
    }
    return 0;
}
