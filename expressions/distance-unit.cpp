#include <iostream>

using namespace std;

int main()
{   float feet;
    cin>>feet;
   float inches,yards,miles;
   inches=0.3937*feet;
   yards=3*feet;
   miles=5280*feet;
   cout<<inches<<"\n"<<yards<<"\n"<<miles<<"\n";
return 0;
}
