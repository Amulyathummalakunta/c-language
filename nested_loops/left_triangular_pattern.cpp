#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,m=1;
    cin>>n;
     for(i=n;i>=1;i--)  
    {  
        for(j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;
    }
        return 0;
    }  
