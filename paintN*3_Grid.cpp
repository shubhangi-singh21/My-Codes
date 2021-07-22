/*Given an integer N, the task is to paint a grid of size N x 3 using colors Red, Yellow, or Green while making such that no pair of adjacent cells has the same color. Print the number of distinct ways in which it is possible

Examples:

Input: N = 1
Output: 12
Explanation: 
Following 12 possible ways to paint the grid exists:

Red, Yellow, Red
Yellow, Red, Yellow
Green, Red, Yellow
Red, Yellow, Green
Yellow, Red, Green
Green, Red, Green
Red, Green, Red
Yellow, Green, Red
Green, Yellow, Red
Red, Green, Yellow
Yellow, Green, Yellow
Green, Yellow, Green
*/

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to count the number
// of ways to paint N * 3 grid
// based on given conditions
void waysToPaint(int n)
{

	// Count of ways to pain a
	// row with same colored ends
	int same = 6;

	// Count of ways to pain a row
	// with different colored ends
	int diff = 6;

	// Traverse up to (N - 1)th row
	for (int i = 0; i < n - 1; i++) {

		// Calculate the count of ways
		// to paint the current row

		// For same colored ends
		long sameTmp = 3 * same + 2 * diff;

		// For different colored ends
		long diffTmp = 2 * same + 2 * diff;

		same = sameTmp;
		diff = diffTmp;
	}

	// Print the total number of ways
	cout << (same + diff);
}

int main()
{
	int N = 2;
	waysToPaint(N);
}

