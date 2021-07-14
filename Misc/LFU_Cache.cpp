struct Node
{
  int key;
  int value;
  int cnt;
  Node *next;
  Node *prev;
  Node( int key1, int value1)
  {
    key = key1;
    value = value1;
    cnt = 1;
  }
};

struct List
{
  int size;
  Node *head;
  Node *tail;
  List();
  {
    head = newNode( 0, 0);
    tail = newNode( 0, 0);
    head ->next = tail;
    tail ->prev = head;
    size = 0;
  }
  
  void Addfront( Node *node)
  {
    Node *temp = head ->next;
    node ->next = temp;
    node ->prev = head;
    head ->next = node;
    temp ->prev = node;
    size ++:
  }
  
  void removenode( Node *delnode)
  {
    Node *delprev = delnode ->prev;
    Node *delnext = delnode ->next;
    delprev ->next = delnext;
    delnext ->prev = delprev;
    size --;
  }
};

class LFUcache
{
  map <int,  Node*> keyNode;
  map <int, List*> freqListMap;
  int maxsize;
  int minfreq;
  int cursize;;
  
  public:
   LFUcache( int capacity)
   {
     maxsize = capacity;
     minfreq = 0;
     cursize = 0;
   }
  
  void update freqListMap( Node *node)
  {
    KeyNode.erase( node ->key);
    freqListMap[ node ->cnt] -> removeNode( node);
    if( node ->cnt == minfreq && freqListMap[node ->cnt] ->size == 0)
    {
      minfreq ++:
    }
    
    node ->cnt += 1;
    nexthigherfreqList ->Addfront( node);
    freqListMap[node -> cnt] = nexthigherfreqList;
    KeyNode[ node ->key] = node;
  }
  
  int get( int Key)
  {
    if( KeyNode.find(Key) != KeyNode.end())
    {
      Node *node = KeyNode[Key];
      int val = node ->value;
      updatefreqListMap( node);
      return val;
    }
    
    return -1;
  }
  
  void put( int key, int value)
  {
    if( maxsize == 0)
      return 0;
    if( KeyNode.find(Key) != KeyNode.end())
    {
      Node *node = KeyNode[Key];
      node ->value = value;
      updatefreqListMap(node);
    }
    
    if( cursize == maxsize)
    {
      List *List = freListMap( minfreq);
      KeyNode.erase( List->yail->prev->Key);
      freqListMap[minfreq]->remove.Node( list->tail->prev);
      cursize --;
    }
    
    cursize ++;
    minfreq = 1;
    List *Listfreq = newList();
    if( freqListMap.find(minfreq) != freqListMap.end())
    {
      Listfreq = freqListmap[minfreq];
    }
    
    Node *node = newNode(Key, value);
    Listfreq->Addfront(node);
    Key[Node[Key]] = node;
    freqListmap[minfreq] = Listfreq;
  }
}
};
