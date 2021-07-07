//logic: max(include, exclude)

int knapsack( int cap, int wt[], int profit[], int n)
{
  int dp[n + 1][cap + 1];
  for( int i = 0; i <= n; i ++)
  {
    for( int w = 0; w < = cap; w ++)
    {
      if( i == 0 || w == 0)
        dp[i][w] = 0;
      if( wt[i - 1] < = w)
      {
        dp[i][w] = max( dp[i - 1][w], profit[i] + dp[i - 1][w - wt[i]];
      }
      
      else
        dp[i][w] = dp[i - 1][w];
    }
 }
}
                  
