/*Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:

The first and the only argument contains an integer array, A.
Output Format:

Return an integer representing the maximum possible sum of the contiguous subarray.
Constraints:

1 <= N <= 1e6
-1000 <= A[i] <= 1000
For example:

Input 1:
    A = [1, 2, 3, 4, -10]

Output 1:
    10

Explanation 1:
    The subarray [1, 2, 3, 4] has the maximum possible sum of 10.*/


int Solution::maxSubArray(const vector<int> &A) {
int n, i,j;
int sum = INT_MAX;
n = A.size();
int max_so_far = A[0];
   int curr_max = A[0];
 
   for (int i = 1; i < n; i++)
   {
        curr_max = max(A[i], curr_max+A[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
