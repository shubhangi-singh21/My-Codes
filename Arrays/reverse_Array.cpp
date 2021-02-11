//Recursive Method, time complexity O(n)

#include <iostream>

using namespace std;

void reverseArray( int a[], int start, int end, int n)
{
    int i, temp;
    if (start >= end)
    return;
        
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    
    reverseArray(a, start+1, end-1, n);
}

void print(int a[], int n)
{  
    int i;
    for (i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[10],n,i;
    cout<<"Enter total no of terms:";
    cin>>n;
    cout<<"Enter elements:";
    for (i=0; i<n; i++)
    {
        cin>> a[i];
    }
    
    cout<<"Original array is:";
    print(a, n);
    reverseArray(a, 0, n-1, n);
    cout<<"Reversed array is:";
    print(a, n);
}
