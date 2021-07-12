class node
{
  public:
  int key;
  int val;
  node *next;
  node *prev;
  node( int key, int val)
  {
    key = key;
    val = val;
  }
};

node *head = new node( -1, -1);
node *tail = new node( -1. -1);
int cap;
unordered map <int, node*. m;

LRUCache( int capacity)
{
  cap = capacity;
  head -> next = tail;
  tail -> prev = head;
}

void addnode( node* newnode)
{
  node *temp = head->next;
  newnode ->next = temp; //tail=temp
  newnode ->prev = head;
  head ->next = mewnode;
  temp ->prev = newnode;
}

void deletenode( node *delnode)
{
  node *delprev = delnode ->prev;
  node *delnext = delnode ->next;
  delprev ->next = delnext;
  delnext ->prev = delprev;
}

int get( int key)
{
  if( m.find(key))
  {
    node *resnode = m[key];
    int res = resnode ->val;
    m.erase (key);
    deletenode (resnode);
    addnode (resnode);
    m[key] = head ->next;
    return res;
  }
  
  return -1;
}

void put( int key, int val)
{
  if( m.find( key)!= m.end())
  {
    node *existing node = m[key];
    m.erase(key);
    deletenode(exisitingnode);
  }
  
  if( m.size() == cap)
  {
    m.erase( tail ->prev->key);
    deletenode( tail ->prev);
  }
  
  addnode( newnode( key, value));
  m[key] = head ->next;
}
};
