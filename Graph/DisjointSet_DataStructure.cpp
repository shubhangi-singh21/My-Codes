//to find whether some nodes belong to the same component of graph or not

int parent [10000];
int rank [1000];
void makeset()
{
  for( int i = 1; i <= n; i ++)
  {
    parent[i] = i;
    rank[i] = 0;
  }
}

int findParent( int node);
{
  if( node = parentnode)
    return node;
  else
    return parent[node] = findParent(parent[node]); //path compression
}

void union( int u, int v)
{
  u = findParent(u);
  v = findParent(v);
  
  if( rank[u] < rank[v])
  {
    parent[u] = v;
  }
  
  else if( rank[v] < rank[u])
  {
    parent[v] = u;
  }
  
  else
  {
    parent[v] = u;
    rank[u] ++;
  }
}

void main()
{
  makeset();
  int m;
  cin >> m;
  while( m --)
  {
    int u, v;
    union( u, v);
  }
  
  if( findParent[u] != findParent[v])
    cout << "Different Component";
  else
    cout << "Same Component";
}
