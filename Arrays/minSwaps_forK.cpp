//Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

//Input:  arr[] = {2, 1, 5, 6, 3}, k = 3
//Output: 1

//Time complexity: O(n)
//Auxiliary space: O(1)

#include <iostream>

using namespace std;

int minswap(int arr[], int n, int k){
    int count=0, i,j;
    for(i=0; i<n; i++){
        if(arr[i]<=k){
            count++;
        }
    }
    int bad=0;
    for(i=0; i<count;i++){
        if(arr[i]>k){
            bad++;
        }
    }
    
    int ans=bad;
    for(i=0, j<count; j<n; i++, j++){
        if(arr[i]>k){
            bad--;
        }
        
        if(arr[j]>k){
            bad++;
        }
    ans=min(ans, bad);
    }
    return ans;
}

int main()
{
    int n, k, i,arr[20];
    cout<<"Enter number of elements in the array:";
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements of the array:";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the k element:";
    cin>>k;
    cout<<endl;
    cout<< minswap(arr, n, k);
    return 0;
}
