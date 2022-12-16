#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number:";
    cin>>n;
    char c;
    cout<<"Enter a character:";
    cin>>c;
    if(c=='a' || c=='c'|| c=='e' || c=='g'){
        if(n%2!=0){
            cout<<"Black";
            }
            else{
             cout<<"White";
            
        }
    }
    if(c=='b' || c=='d' || c=='f' || c=='h'){
            if(n%2==0){
                  cout<<"black";
        }
        else{
            cout<<"white";
        }
        }
    return 0;
}
