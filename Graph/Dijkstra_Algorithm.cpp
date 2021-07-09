//Dijkstra's Algorithm: to find shortest paths from source to all vertices in the given graph.

int main()
{
  int n, m;
  int source;
  vector <pair<int, int>> g[n + 1];
  int a, b, wt;
  for( i = 0; i < m; i ++)
  {
    cin >> a >> b >> wt;
    g[a].push_back( make_pair(b, wt));
    g[b].push_back( make_pair(a, wt));
  }
  
  cin >> source;
  
  Priority_queue <pair<int, int>, vector <pair<int, int>>, greater <pair<int, int>> pq;
    vector <int> dist( V, INF);
    pq.push( make_pair(0, source));
    dist[source] = 0;
  
  while( !pq.empty())
  {
    int distance = pq.top().first;
    int prev = pq.top().second;
    pq.pop();
    vector <pai<int, int> :: iterator it;
    for( it = g[prev].begin(); it != g[prev].end(); it ++)
    {
      int nextdist = it->first;
      int next = it->second;
      if( dist[next] > dist[prev] + nextdist)
      {
        dist[next] = dist[prev] + nextdist;
        pq.push( make_pair( dist[next], next));
      }
    }
    
    for( i = 0; i < n; i++)
    {
      cout << dist[i];
    }
  
