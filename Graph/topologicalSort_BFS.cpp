//KAHN's ALGORITHM

vector <int> toposort( int N, vector <int> adj[])
{
  queue <int> q;
  vector <int> indegree (N, 0);
  for( i = 0; i < N; i ++)
  {
    for( auto it: adj[i])
      indegree ++;
  }
  
  for( i = 0; i < N; i ++)
  {
    if( indegree[i] == 0)
    {
      q.push(i);
    }
  }
    
  vector <int> ans;
  while(!q.empty())
  {
    int node = q.front();
    q.pop();
    ans.push_back(node);
    
    for( auto it: adj[node])
    {
      indegree[it] --;
      if( indegree[it] == 0)
        q.push(it);
    }
  }
  
  return ans;
} //close toposort
