//Cycle detection for undirected graph components

bool checkCycle( int s, int v, vector<int>&vis, vector<int> adj[])
{
  queue <pair<int, int>> q;
  vis[s] = true;
  q.push(s, -1);
  while( !q.empty())
  {
    int node = q.front().first;
    int parent = q.front().second;
    q.pop();
     for (auto it: adj[node])
     {
       if(vis[it] == 0)
       {
         vis[it] = 1;
         q.push(it, node);
       }
       
       else if( parent!= it)
       {
         return true;
       }
       
     }
    return false;
}
