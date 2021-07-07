bool canPartition( int [] num)
{
  int n = sizeof(num);
  int sum = 0;
  for( int i = 0; i < n; i ++)
    sum += num[i];
  if( sum%2 != 0)
    return false;
  else
    sum = sum/2;
  
  bool dp[n][sum + 1];
  for( i = 0; i < n; i ++)
    dp[i][0] = true;
  
  for( int s = 1; s <= sum; s ++)
    dp[0][s] = (num[0] == s ? true:false);
  
  for( int i = 1; i < n; i ++)
  {
    for( int s = 1; s <= sum; s ++)
    {
      if( dp[i - 1][s])
      {
        dp[i][s] = dp[i - 1][s];
      }
      
      else if( s >= num[i])
      {
        dp[i][s] = dp[i - 1][s - num[i]];
      }
      
      return dp[n - 1][sum];
    }
  }
}
