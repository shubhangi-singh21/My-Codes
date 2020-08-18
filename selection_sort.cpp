//best and worst case complexity- O(n^2)

#include <iostream>
using namespace std;

void swap ( int &a, int &b )
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void display ( int A [], int n)
{ 
  int i;
  for ( i = 0; i < n; i++ )
  {
    cout << A [i] <<" ";
  }
  cout << endl;
}

void SelSort ( int A [], int n)
{
  int i, j, min;
  for ( i = 0; i < n; i++)
  {
    min = i;
    for ( j = i+1; j < n; j++)
    {
      if ( A [j] < A [min] )
      {
        min = j;
      }
    }
    if ( min!= i ) 
    {
      swap ( A [i], A [min] );
    }
  }
}

int main () 
{
   int n, i;
   cout << "Enter the number of elements: ";
   cin >> n;
   int A [n];          
   cout << "Enter elements:" << endl;
   for(  i = 0; i < n; i++) 
   {
      cin >> A [i];
   }
   cout << "Array before sorting: ";
   display( A, n );
   SelSort( A, n );
   cout << "Array after sorting: ";
   display( A, n );
   return 0;
}
