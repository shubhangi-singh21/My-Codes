//not final


int main()
{
  int n, m;
  cin >> n >> m;
  vector <int> adj[n];
  for( int i = 0; i < m; i ++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
  vector <int> Tin( n, -1);
  vector <int> low( n, -1);
  vector <int> vis( n, 0);
  int timer = 0;
  for( i = 0; i < n; i ++)
  {
    if( vis[i] == 0)
    {
      dfs( i, -1, Tin, low, timer, adj, Articulation);
    }
    
    for( i = 0; i < n; i ++)
    {
      if( Articulation[i] == 1)
        cout << i << endl;
    }
    
    void dfs( int node, int parent, vector <int> vis[], vector <int> Tin, vector <int> low, int timer, vector <int> adj, int articulation)
    {
      vis[node] = 1;
      Tin[node] = low[node] = timer++;
      for( auto it: adj[node])
      {
        if( it == parent)
          continue;
        if( vis[it] == 0)
        {
          dfs( it, node, vis, Tin, low, timer, adj, articulation);
          low[node[ = min( low[node], low[it]);
          if( low[it] > Tin[node])
            cout << node << "" << it << endl;
         }
           else
           low[node] = min)( low[node], Tin[it]);
        }
     }
                   
                   

