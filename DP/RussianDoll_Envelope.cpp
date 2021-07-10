// Leetcode: 354

int maxEnvelopes( vector <vector <int>> &envelopes) //2D array input
{
  int n = envelopes.size();
  if( n == 0)
    return 0;
  sort( envelopes.begin(), envelopes.end());
  vector <int> dp(n + 1);
  int max = 1;
  for( int i = 1; i < n; i ++)
  {
    for( j = 0; j < 1; j ++)
    {
      if( envelopes[i][0] > envelopes[j][0] && envelopes[i][1] > envelopes[j][1] && 1 + dp[j] > dp[i])
        dp[i] = 1 + dp[j];
      
      if( max < dp[i])
        max = dp[i];
    }
  }
  
  return max;
}
