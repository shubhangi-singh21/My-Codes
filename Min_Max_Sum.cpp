// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include <bits/stdc++.h>

using namespace std;

void findmaxmin(int a[5])
{
    int i, j; 
    long sum=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        sum+=a[i];
    }
    long min = sum - a[0];
    long max = sum - a[4];
    cout<< min <<" "<<max;
}

int main()
{
    int a[5], i;
    for(i=0; i<5; i++)
    {
        cin>> a[i];
    }
    findmaxmin(a);
    return 0;
}
