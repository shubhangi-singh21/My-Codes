//worst $ average case time complexity- O(n^2)
//best case time complexity- O(n)

*******************************************************************************/
#include <iostream>
using namespace std;

void display ( int A [], int n )
{
  int i;
  for ( i = 0; i < n; i++ )
  {
    cout << A [ i ] << " ";
  }
  cout << endl;
}

void InsSort ( int A [], int n )
{
  int i, j, temp;
  for ( i = 1; i <= n; i++ )
  {
   temp = A [ i ];
   j = i - 1;
   while ( j > 0 && A [ i ] > temp )
   {
    A [ j + 1 ] = A [ j ];
    j--;
   }
   A [ j + 1 ] = temp;
  }
}

int main() 
{
  int n,i;
  cout << "Enter the number of elements: ";
  cin >> n;
  int A [ n ];   
  cout << "Enter elements:" << endl;
  for( i = 0; i < n; i++) 
  {
      cin >> A [ i ];
  }
   cout << "Array before sorting: ";
   display ( A, n );
   InsSort ( A, n );
   cout << "Array after sorting: ";
   display ( A, n );
   return 0;
}
