/*Given a positive integer N, the task is to find the number of ordered pairs (X, Y) where both X and Y are positive integers, such that they satisfy the equation 1/X + 1/Y = 1/N.

Examples:

Input: N = 5 
Output: 3 
Explanation: Only 3 pairs {(30,6), (10,10), (6,30)} satisfy the given equation.*/

Logic:
/* Therefore, it can be observed that, to have a positive integer X, the remainder when N2 is divided by (Y – N) needs to be 0.
It can be observed that the minimum value of Y can be N + 1 (so that denominator Y – N > 0) and the maximum value of Y can be N2 + N so that N2/(Y – N) remains a positive integer ≥ 1.
Then iterate over the maximum and minimum possible values of Y, and for each value of Y for which N2 % (Y – N) == 0, increment count.
Finally, return count as the number of ordered pairs.*/


// C++ Program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find number of ordered
// positive integer pairs (x,y) such
// that they satisfy the equation
void solve(int n)
{
	// Initialize answer variable
	int ans = 0;

// Iterate over all possible values of y
	for (int y = n + 1; y <= n * n + n; y++) {

		// For valid x and y,
		// (n*n)%(y - n) has to be 0
		if ((n * n) % (y - n) == 0) {

			// Increment count of ordered pairs
			ans += 1;
		}
	}

	// Print the answer
	cout << ans;
}

int main()
{
	int n = 5;
	// Function call
	solve(n);
	return 0;
}
