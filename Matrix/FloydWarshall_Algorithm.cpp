//method to solve 0/1 knapsack

void floydWarshall( int graph[][v])
{
  int dist[u][v], i, j, k;
  for( i = 0; i < v; i ++)
  {
    for( j = 0; j < v; j ++)
    {
      dist[i][j] = graph[i][j];
    }
  }
  
  for( k = 0; k < v; k ++)
  {
    for( i = 0; i < v; i ++)
    {
      for( j = 0; j < v; j ++)
      {
        if( dist[i][k] + dist[k][j] < dist[i][j])
        {
          dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
  }
  
  for( i = 0; i < v; i ++)
  {
    for( j = 0; j < v; j ++)
    {
      cout << dist[i][j];
    }
  }
}
