bool isSubsetSum( int set[], int n, int sum)
{
  bool dp[n + 1][sum + 1];
  for( i = 0; i <= n; i ++)
    dp[i][0] = true;
  for( i = 1; i <= sum; i ++)
    subset[0][i] = false;
  for( int i = 1; i <= n; i ++)
  {
    for( j = 1; j <= sum; j ++)
    {
      if( j < set[i - 1])
        set[i][j] = dp[i = 1][j];
      if( j >= set[i-1])
      {
        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - set[i - 1]];
      }
    }
  }
}
