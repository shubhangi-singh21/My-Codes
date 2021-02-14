// Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 
//Time complexity: O(n)


#include <iostream>

using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int a[], int n)
{
    struct Pair minmax;
    int i;
    
    if(n%2 == 0)
    {
        if(a[0] > a[1])
        {
            minmax.max = a[0];
            minmax.min = a[1];
        }
        
        else
        {
            minmax.min = a[0];
            minmax.max = a[1];
        }
        i=2;
    }
    
    else{
        minmax.min = a[0];
        minmax.max = a[1];
        i=1;
    }
    
    while(i < n-1)
    {
        if(a[i] > a[i+1])
        {
            if(a[i] > minmax.max)
            minmax.max = a[i];
            
            if(a[i+1] < minmax.min)
            minmax.min = a[i+1];
        }
        
        else
        {
            if(a[i+1] > minmax.max)
                minmax.max = a[i+1];
        }
        i+=2;
    }
    return minmax;
}

int main()
{
    int a[20], n,i;
    cout<<"Enter no of elements:";
    cin>>n;
    
    cout<<"\nEnter the elements:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    Pair minmax = getMinMax(a, n);
    
    cout<<"\nMinimum element:"<<minmax.min<<endl;
    cout<<"\nMaximum element:"<<minmax.max<<endl;
    return 0;
}
