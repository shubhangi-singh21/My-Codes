#include <iostream.h>
using namespace std;

  int BinSearch (int A, int n, int kay)
  {
    int l = 1;
    int h = n;
    while (l < h)
    { 
      mid = (l + h)/ 2;
      if (key == A [mid])
      {
        return mid;
       }
       else if (key < A [mid])
       {
         h = mid - 1;
        }
        else
        {
          l = mid + 1;
         }
      }
  
