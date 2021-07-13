//Algorithm

void buildHeap(int arr[], int n)
{
  int start = (n/2) - 1;
  for (int i=start; i>=0; i--)
  {
    heapify(arr, n, i);
   }
}

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int l = 2*i + 1;
  int r = 2*i + 2;
  if(l<n && arr[1] > arr[largest])
    largest = l;
  if(r<n && arr[1] > arr[largest])
    largest = r;
   if(largest! = i){
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
}
