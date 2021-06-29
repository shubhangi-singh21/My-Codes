//Cycle detection for undirected graph components

bool checkCycle(int node, int parent, vector <int> &vis, vector <int> adj[])
{
  vis[node] = 1;
  for(auto it: adj[node])
  {
    if(vis[it] == 0)
    {
      if(checkCycle(it, node, vis, adj))
        return true;
    }
  }
  
  return false;
}


/* true = cycle detected
   false = no cycle present*/
