#include <bits/stdc++.h> 
using namespace std; 
  
// Returns true if edit distance between s1 and 
// s2 is one, else false 
bool isEditDistanceOne(string s1, string s2) 
{ 
    // Find lengths of given strings 
    int m = strlen(s1), n = strlen(s2); 
  
    // case 1: If difference between lengths is more than 
    // 1, then strings can't be at one distance 
    if (abs(m - n) > 1) 
        return false; 
  
    int count = 0; // Count of edits 
  
    int i = 0, j = 0; 
    while (i < m && j < n) 
    { 
        // case 2: If current characters don't match 
        if (s1[i] != s2[j]) 
        { 
            if (count == 1) 
                return false; 
  
            // case 3: If length of one string is 
            // more, then only possible edit 
            // is to remove a character 
            if (m > n) 
                i++; 
            else if (m< n) 
                j++; 
            else //If lengths of both strings are same 
            { 
                i++; 
                j++; 
            } 
              
            // Increment count of edits  
            count++; 
        } 
  
        else // If current characters match 
        { 
            i++; 
            j++; 
        } 
    } 
  
    // If last character is extra in any string 
    if (i < m || j < n) 
        count++; 
  
    return count == 1; 
} 
  
// Driver program 
int main() 
{ 
   string s1 = "gfg"; 
   string s2 = "gf"; 
   isEditDistanceOne(s1, s2)? 
           cout << "Yes": cout << "No"; 
   return 0; 
} 
