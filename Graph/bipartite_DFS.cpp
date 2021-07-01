bool checkBipartite( vector <int> adj[], int n)
{
  int color[n];
  memset( color, -1, sizeof(color));
  for( i = 0; i < n; i++)
  {
    if( color[i] == -1)
    {
      color[i] = 1;
      if( !bipartiteDFS( i, adj, color)
         return false;
    }
  }
    return true;
         
bool bipartiteDFS( int node, vector <int> adj[], int color[])
         {
           for( auto it: adj[node])
           {
             if( color[it] == -1)
             {
               color[it] = 1 - color[node];
               if( !bipartiteDFS( it, adj, color))
               {
                 return false;
               }
             }
             
             return true;
         }
         
