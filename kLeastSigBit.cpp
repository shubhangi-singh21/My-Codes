// A number N is given. We need to print its ‘K’th Least Significant Bit.

#include <bits/stdc++.h> 
using namespace std; 
  
//Function returns 1 if set, 0 if not 
bool LSB(int num, int K) 
{ 
    return (num & (1 << (K-1))); 
} 
  
//Driver code 
int main()  
{ 
    int num = 10, K = 4; 
      
    //Function call 
    cout << LSB(num, K); 
      
    return 0; 
} 
