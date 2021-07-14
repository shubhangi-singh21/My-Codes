/* The Fibonacci numbers (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...) are defined by the recurrence:

- F0 = 0
- F1 = 1
- Fi = Fi−1 + Fi−2 for i > 1


Write a program which calculates Mn = Fn mod 2^m for given pair of n and m.

Note that a mod b gives the remainder when a is divided by b. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    class solution{
     
public:
int fib(int n)
{

    int f[n + 2];
    int i;

    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    solution s;
    int n, m, ans = 0, fans = 0;
    while(cin >> n >> m)
    {
    int p = pow( 2, m);
    ans = s.fib(n);
    fans = ans%p;
    cout << fans <<endl;
    }
    
   return 0;
}
