//Pre-requisite:list must be sorted 

#include <iostream>
using namespace std;

  int BinSearch (int A[], int n, int l, int h, int key)
  {
    int mid;
    while (l < h)
    { mid = ( l + h )/2;
    
      if (key == A [mid])
      {
        cout << "Element is present at index " << A [mid];
        break;
      }
       else if (key < A [mid])
       {
         h = mid - 1;
         {return BinSearch (A, n, l, mid-1, key);}
        }
        else
        {
          l = mid + 1;
          {return BinSearch (A, n, mid+1, h, key);}
        }
      }
      return -1;
  }
   int main ()
   {
       int A[] = { 2, 3, 4, 10, 40 }; 
    int key = 4; 
    int n = sizeof(A) / sizeof(A[0]); 
    int l = 1;
    int h = n;
    int result = BinSearch(A, n, l, h, key); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
   }
