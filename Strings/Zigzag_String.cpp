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
     if (B == 1) return A;

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
