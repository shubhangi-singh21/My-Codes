/* Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 2 adjacent posts have the same color */


long countWays( int n, int k) //n: no of posts in fence, k: no of colors
{
  long dp[n+1];
  memset(dp, 0, sizeof(dp)); //to set all values in dp[] to 0 originally
  dp[1]=k; //there are always k ways to color the 1st post
  int same=0, diff=k;
  
  for(int i=2; i<=n; i++)
  {
    same=diff; //current 'same' is always same as previous 'diff'
    diff= dp[i-1]*(k-1); //(diff[i] = (diff[i-1]+diff[i-2])*(k-1) -> total[i-1]*(k-1)
    dp[i]= (same + diff); //total choices
  }
  
  return dp[n];
}
