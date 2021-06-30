vector <int> toposort( int N, vector <int> adj[])
{
  stack <int> st;
  vector <int> vis (N, 0);
  for( i = 0; i < N; i ++)
  {
    if(vis[i] == 0)
    {
      DFStopo(i, vis, adj);
    }
  }
  
  vector <int> ans;
  while(!st.empty())
  {
    ans.push_back(st.top());
    st.pop();
  }
  return ans;
}

void DFStopo( int node, vector <int> &vis, stack <int> st, vector <int> adj[])
{
  vis[node] = 1;
  for( auto it: adj[node])
  {
    if(vis[it] == 0)
    {
      DFStopo( it, vis, st, adj);
    }
    
    st.push(node);
}
