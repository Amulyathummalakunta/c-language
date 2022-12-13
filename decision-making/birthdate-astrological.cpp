#include <bits/stdc++.h>
using namespace std;
int main(){
    string month;
   int day;
  cin>>month>>day;
  if(month[0]=='D'&&month[1]=='e'){
      if(day>=22){
      cout<<"Capricorn";
  }
  else  cout<<"Sagittarius";}
  
    if(month[0]=='j'&&month[1]=='a'){
        if(day>=20)
      cout<<"Aquarius";
      else
          cout<<"Capricorn";
   }
         if(month[0]=='f'&&month[1]=='e'){
        if(day>=19)
        cout<<"Pisces";
      else
            cout<<"Aquarius";
   }
  
        if(month[0]=='m'&&month[3]=='c'){
        if(day>=21)
      cout<<"Aries";
      else
          cout<<"Pisces";
      }
    if(month[0]=='a'&&month[1]=='p'){
        if(day>=20)
       cout<<"Taurus";
      else
          cout<<"Aries";
      }
    if(month[0]=='m'&&month[2]=='y'){
        if(day>=21)
        cout<<"Gemini";
      else
         cout<<"Taurus";
      }
    
      if(month[0]=='j'&&month[1]=='u'){
        if(day>=21)
       cout<<"Cancer";
      else
        cout<<"Gemini";
      }
 if(month[0]=='j'&&month[2]=='l'){
        if(day>=23)
       cout<<"leo";
      else
      cout<<"Cancer";
      }
     if(month[0]=='a'&&month[1]=='u'){
        if(day>=23)
         cout<<"Virgo";
      else
       cout<<"leo";
      }
     if(month[0]=='s'&&month[1]=='e'){
        if(day>=23)
         cout<<"Libra";
      else
      cout<<"Virgo";
     }
      if(month[0]=='o'&&month[1]=='c'){
        if(day>=23)
          cout<<"Scorpio";
      else
      cout<<"Libra";
      }
      if(month[0]=='n'&&month[1]=='o'){
        if(day>=22)
          cout<<"Sagittarius";
      else
     cout<<"Scorpio";
      }
     return 0;
}
