/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P.......A........H.......N
..A..P....L....S....I...I....G
....Y.........I........R
And then read line by line: PAHNAPLSIIGYIR

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"

Time complexity: O(len), Space complexity: O(len)*/


string Solution::convert(string A, int B) {
     if (B == 1 || B >= A.size()) //edge cases
          return A;

        vector<string> rows(min(B, int(A.size())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : A) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == B - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }

        string ret;
        for (string row : rows) ret += row;
        return ret;
}


//Alternate Solution

string Solution::convert(string a, int b) {
    if(b==1 || b >= a.size())
         return a;
    vector<string> res(b);
    int i = 0, j = 0 ;
    
    // boolean variable to check if i am moving forward for the lines (res);
    bool forward = true; // initially it is true;
    
    while(i<a.length()){
        res[j] +=  a[i++];
        
        // if moving forward then make it false once we reach the end.
        if(forward) 
             forward = !(j==b-1);
        
        // if moving backward (i.e, forward is false), then make it true once we reach in the front.
        else 
             forward = j==0;
        
        if(forward)
             j++;
        else j--;
    }
    
    string ans = "";
    for(auto x: res)
         ans += x; // append strings line by line.
    return ans;
}
