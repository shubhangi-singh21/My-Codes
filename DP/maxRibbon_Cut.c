int main()
{
  scanf( "%d%d%d%d" , &n, &a[0], &a[1], &a[2]);
  int dp[ n + 1];
  dp[0] = 0;
  for( int i = 1; i <= n; i ++)
    dp[i] = -9999;
  for( int i = 1; i <= nl i ++)
  {
    for( int j = 0; j <3; j ++)
    {
      if( i > a[j])
        dp[i] = max( dp[i], dp[i - a[j] + 1])
        printf( "%d\n", dp[n]);
      return 0;
    }
  }
}
