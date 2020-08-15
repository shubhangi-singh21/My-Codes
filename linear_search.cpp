//Pre-requisite:list must not contain repeated elements.

#include <iostream>
using namespace std;

    int LinSearch(int A [], int key)
   {    int i;
        for (i = 0; i< 5; i ++)
        {
            if ( key == A [i] )
                {
                    cout << "Element found at index "<< i+1;
                    break;
                }
        }
          cout << "Element not found";
    return -1;
    }

int main()
{
  int A[10], key, i;
  for (i= 0; i< 5; i ++)
  {
    cin >> A[i];
   }
   
   cin >> key;
   return LinSearch(A, key);
   
}
