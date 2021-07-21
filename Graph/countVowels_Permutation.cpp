/*Given an integer n, your task is to count how many strings of length n can be formed under the following rules:

Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')
Each vowel 'a' may only be followed by an 'e'.
Each vowel 'e' may only be followed by an 'a' or an 'i'.
Each vowel 'i' may not be followed by another 'i'.
Each vowel 'o' may only be followed by an 'i' or a 'u'.
Each vowel 'u' may only be followed by an 'a'.
Since the answer may be too large, return it modulo 10^9 + 7.

Example 1:

Input: n = 1
Output: 5
Explanation: All possible strings are: "a", "e", "i" , "o" and "u".*/


// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the number of
// vowel permutations possible
int countVowelPermutation(int n)
{
	
	// To avoid the large output value
	int MOD = (int)(1e9 + 7);

	// Initialize 2D dp array
	long dp[n + 1][5];
	
	// Initialize dp[1][i] as 1 since
	// string of length 1 will consist
	// of only one vowel in the string
	for(int i = 0; i < 5; i++)
	{
		dp[1][i] = 1;
	}
	
	// Directed graph using the
	// adjacency matrix
	vector<vector<int>> relation = {
		{ 1 }, { 0, 2 },
		{ 0, 1, 3, 4 },
		{ 2, 4 }, { 0 }
	};

	// Iterate over the range [1, N]
	for(int i = 1; i < n; i++)
	{
		
		// Traverse the directed graph
		for(int u = 0; u < 5; u++)
		{
			dp[i + 1][u] = 0;

			// Traversing the list
			for(int v : relation[u])
			{
				
				// Update dp[i + 1][u]
				dp[i + 1][u] += dp[i][v] % MOD;
			}
		}
	}

	// Stores total count of permutations
	long ans = 0;

	for(int i = 0; i < 5; i++)
	{
		ans = (ans + dp[n][i]) % MOD;
	}

	// Return count of permutations
	return (int)ans;
}

// Driver code
int main()
{
	int N = 2;
	
	cout << countVowelPermutation(N);
}
