// m: size of array    n: sum

int count( int s[], int n, int N) // n: denominations, N: sum
{
  int T[n + 1][N + 1];
  for( int i = 0; i <= n; i ++)
  {
    for( int j = 0; j <= N; j ++)
    {
      if( i == 0)
        T[0][j] = 0;
      else if( j == 0)
        T[i][0] = 1;
      else if( s[i - 1] > j)
        T[i][j] = T[i - 1][j];
      else
        T[i][j] = T[i - 1][j] + T[i][j - s[i - 1]];
    }
  }
  
  return T[n][N];
}
