void shortestPath( int source, int n, vector <int> adj[])
{
  int vis[n] = {0};
  stack <int> st;
  for( i = 0; i < n; i ++)
  {
    if( vis[i] == 0)
      findtoposort( i, vis, st, adj);
  }
  
  int dist[n];
  for( i = 0; i < n; i ++)
    dist[i] = INT_MAX;
  
  dist[src] = 0;
  while( !st.empty())
  {
    int node = st.top();
  }
  
  st.pop();
  if( dist[node] ! = INF)
  {
    for( auto it: adj[node])
    {
      if( dist[node] + it.second < dist[it.first])
        dist[it.first] = dist[node] + it.second;
    }
  }
  
  for( i = 0; i < n; i ++)
    cout << dist[i];
