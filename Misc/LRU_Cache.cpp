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
