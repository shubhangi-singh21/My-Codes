#include<bits/stdc++.h>
#define N 4
using namespace std;
 
// function for finding row with maximum 1
void findMax (int arr[][N])
{
    int row = 0, i, j;
    for (i=0, j=N-1; i<N;i++)
    {
        // find left most position of 1 in a row
        // find 1st zero in a row
        while (arr[i][j] == 1 && j >= 0)
        {
            row = i;
            j--;
        }
    }
    cout << "Row number = " << row+1;
    cout << ", MaxCount = " << N-1-j;
}
 
// driver program
int main()
{
    int arr[N][N] = {0, 0, 0, 1,
                     0, 0, 0, 1,
                     0, 0, 0, 0,
                     0, 1, 1, 1};
    findMax(arr);
    return 0;
}
