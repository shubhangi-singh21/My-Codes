//Given a number n, find length of the longest consecutive 1s in its binary representation.
//Logic: {The idea is based on the concept that if we AND a bit sequence with a shifted version of itself, we’re effectively removing the trailing 1 from every sequence of consecutive 1s.
//So the operation x = (x & (x << 1)) reduces length of every sequence of 1s by one in binary representation of x. If we keep doing this operation in a loop, we end up with x = 0. 
//The number of iterations required to reach 0 is actually length of the longest consecutive sequence of 1s.}

#include<bits/stdc++.h> 
using namespace std; 
  
int maxConsecutiveOnes(int x) 
{ 
    // Initialize result 
    int count = 0; 
  
    // Count the number of iterations to 
    // reach x = 0. 
    while (x!=0) 
    { 
        // This operation reduces length 
        // of every sequence of 1s by one. 
        x = (x & (x << 1)); 
  
        count++; 
    } 
  
    return count; 
} 
  
// Driver code 
int main() 
{   int n;
    cin>>n;
    cout << maxConsecutiveOnes(n);
    return 0; 
} 
