#include <iostream>

using namespace std;

void sort(int a[], int n)
{
    int i,j,temp;
    for (i = 0; i < n; i++) 
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j]) 
                {
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
}

int main()
{
    int a[10],n,i,k;
    cout<<"Enter total no of elements:";
    cin>>n;
    cout<<"Enter value of k:";
    cin>>k;
    cout<<"Enter elements:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    sort(a, n);
    
    cout<<k<<"th smallest element is:"<<a[k-1];
    return 0;
}
