//A left rotation operation on an array shifts each of the array's elements 1 unit to the left. 
//For example, if  left rotations are performed on array [1,2,3,4,5] , then the array would become [3,4,5,1,2]. 
//Note that the lowest index item moves to the highest index in a rotation. This is called a circular array.


#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
      for(int i=k;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout << endl;
    return 0;
}
