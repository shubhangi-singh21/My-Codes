/*There are 16 hourglasses in arr. 
An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in arr, then print the maximum hourglass sum. 
The array will always be 6*6. */

#include <bits/stdc++.h>

using namespace std;


int main() {
    int a[6][6],s;
    int m=INT_MIN;

    for(int i=0;i<6;i++)
        {
        for(int j=0;j<6;j++)
            {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<4;i++)
        {
         // j=0;
        for(int j=0;j<4;j++)
            {
            s=(a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            if(s>m)
                m=s;
        }
        
        
            }
    cout<<m;
    
    return 0;

}
