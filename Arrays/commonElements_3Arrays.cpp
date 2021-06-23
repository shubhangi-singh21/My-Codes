//Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

/*Input: 
ar1[] = {1, 5, 10, 20, 40, 80} 
ar2[] = {6, 7, 20, 80, 100} 
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
Output: 20, 80 */

/*Time Complexity: O(n1 + n2 + n3) 
Space complexity: O(n1 + n2 + n3) */

#include <bits/stdc++.h>
using namespace std;

void findCommon(int a[], int b[], int c[], int n1, int n2,
				int n3)
{
	// three maps to maintain frequency of elements
	unordered_map<int, int> m1;
	unordered_map<int, int> m2;
	unordered_map<int, int> m3;

	// creating frequency maps
	for (int i = 0; i < n1; i++)
		m1[a[i]]++;
	for (int i = 0; i < n2; i++)
		m2[b[i]]++;
	for (int i = 0; i < n3; i++)
		m3]++;

	// check if frequency of element greater than 0 in all
	// three maps
	for (int i = 0; i < n1; i++) {
		if (m1[a[i]] > 0 and m2[a[i]] > 0 and m3[a[i]] > 0)
			cout << a[i] << endl;
		// avoding same elemnt being considered twice
		m1[a[i]] = 0;
	}
}

// Driver code
int main()
{
	int ar1[] = { 1, 5, 10, 20, 40, 80 };
	int ar2[] = { 6, 7, 20, 80, 100 };
	int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
	int n1 = sizeof(ar1) / sizeof(ar1[0]);
	int n2 = sizeof(ar2) / sizeof(ar2[0]);
	int n3 = sizeof(ar3) / sizeof(ar3[0]);

	cout << "Common Elements are " << endl;
	findCommon(ar1, ar2, ar3, n1, n2, n3);
	return 0;
}
