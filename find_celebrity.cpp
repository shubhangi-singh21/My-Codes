/* Algorithm:
Create a stack and push all the id’s in the stack.
Run a loop while there are more than 1 element in the stack.
Pop top two element from the stack (represent them as A and B)
Check if A knows B, then A can’t be a celebrity and push B in stack. Check if A doesn’t know B, then B can’t be a celebrity push A in stack
Assign the remaining element in the stack as the celebrity
Run a loop from 0 to n-1 and find the count of persons who knows the celebrity and the number of people whom the celebrity knows. 
If the count of persons who knows the celebrity is n-1 and the count of people whom the celebrity knows is 0 then return the id of celebrity else return -1. */




#include <bits/stdc++.h> 
#include <list> 
using namespace std; 
  
// Max # of persons in the party 
#define N 8 
  
// Person with 2 is celebrity 
bool MATRIX[N][N] = {{0, 0, 1, 0}, 
                    {0, 0, 1, 0}, 
                    {0, 0, 0, 0}, 
                    {0, 0, 1, 0}}; 
  
bool knows(int a, int b) 
{ 
    return MATRIX[a][b]; 
} 
  
// Returns -1 if celebrity 
// is not present. If present, 
// returns id (value from 0 to n-1). 
int findCelebrity(int n) 
{ 
    // Handle trivial  
    // case of size = 2 
  
    stack<int> s; 
  
    int C; // Celebrity 
  
    // Push everybody to stack 
    for (int i = 0; i < n; i++) 
        s.push(i); 
  
    // Extract top 2 
    int A = s.top(); 
    s.pop(); 
    int B = s.top(); 
    s.pop(); 
  
    // Find a potential celevrity 
    while (s.size() > 1) 
    { 
        if (knows(A, B)) 
        { 
            A = s.top(); 
            s.pop(); 
        } 
        else
        { 
            B = s.top(); 
            s.pop(); 
        } 
    } 
  
    // Potential candidate? 
    C = s.top(); 
    s.pop(); 
  
    // Last candidate was not  
    // examined, it leads one  
    // excess comparison (optimize) 
    if (knows(C, B)) 
        C = B; 
  
    if (knows(C, A)) 
        C = A; 
  
    // Check if C is actually 
    // a celebrity or not 
    for (int i = 0; i < n; i++) 
    { 
        // If any person doesn't  
        // know 'a' or 'a' doesn't  
        // know any person, return -1 
        if ( (i != C) && 
                (knows(C, i) ||  
                 !knows(i, C)) ) 
            return -1; 
    } 
  
    return C; 
} 
  
// Driver code 
int main() 
{ 
    int n = 4; 
    int id = findCelebrity(n); 
    id == -1 ? cout << "No celebrity" : 
               cout << "Celebrity ID " << id; 
    return 0; 
} 
