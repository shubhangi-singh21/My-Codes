//Time complexity of this method is O(1) compared to O(n) of pow() function.

#include <iostream>

using namespace std;

int main()
{
    int x, f,n;
  cout<<"Enter the number";  
  cin>>x;
  cout<<"Enter the power value";
  cin>>n;
   f=1;
   x= f<<n;
   cout<<n<<"th power is "<<x;
   return 0;
}
