/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P.......A........H.......N
..A..P....L....S....I...I....G
....Y.........I........R
And then read line by line: PAHNAPLSIIGYIR

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"

Time complexity: O(len), Space complexity: O(len)*/


Solution diagram:
/*n=numRows
Δ=2n-2    1                           2n-1                         4n-3
Δ=        2                     2n-2  2n                    4n-4   4n-2
Δ=        3               2n-3        2n+1              4n-5       .
Δ=        .           .               .               .            .
Δ=        .       n+2                 .           3n               .
Δ=        n-1 n+1                     3n-3    3n-1                 5n-5
Δ=2n-2    n                           3n-2                         5n-4
*/


class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(numRows, "");
        int i =0;
        int n = s.length();
        while(i<n){
            
            for(int j =0; j<numRows && i<n; j++ ){
                v[j].push_back(s[i++]);
            }
            
            for(int j =numRows-2; j>=1 && i<n; j--){
                v[j].push_back(s[i++]);
            }
        }
        
        string res ="";
        for(auto i : v){
            res+=i;
        }
        return res;
    }
};
