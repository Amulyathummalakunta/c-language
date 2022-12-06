#include <iostream>

using namespace std;

int main()
{
   float amt,tax,tip,grandtotal;
   cout<<"enter the amt:";
   cin>>amt;
   tax=0.18*amt;
   tip=0.05*amt;
   grandtotal=tax+tip;
   cout<<grandtotal<<" ";
return 0;
}
