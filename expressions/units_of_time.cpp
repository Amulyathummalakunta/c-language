#include <iostream>

using namespace std;

int main()
{ 
int sec,min,hr,days;
cin>>sec;
min=60*sec;
hr=60*min;
days=366*hr;
cout<<days<<":"<<hr<<":"<<min<<":"<<sec;
return 0;
}
