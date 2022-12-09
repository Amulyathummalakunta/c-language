#include <bits/stdc++.h>
using namespace std;
int main(){
 int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==a){
        cout<<" equilateral triangle";
    }
    else if(a==b || a==c || b==c){
        cout<<"isosceles triangle\n";
    }
        else
           cout<<"scalene\n";
    
    return 0;
}
