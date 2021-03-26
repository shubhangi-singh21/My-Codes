/*You are given two integer sequences A and B,

Your task is to make the sequence A exactly identical to B.

You can perform three operations on the sequence A :

Insert an integer at some position
Remove an integer from some position
Modify an integer i.e. give a new value to an integer at some position
Every operation takes 1 unit of cost.

Your task is, given A and B, find the minimum cost to convert A to B.

Input: 6
1 2 3 4 5 6
8
1 5 7 2 8 4 5 6

Output: 3
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int, int, int);
int a[1001], b[1001], T[1005][1005];

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m;
    scanf("%d", &m);
    int i,j;
    for(i = 1; i <=m; i++){
        scanf("%d", &a[i]);
    }
    int n;
    scanf("%d", &n);
    for(i = 1; i <=n; i++){
        scanf("%d", &b[i]);
    }
    for(i = 0; i <= m; i++){
        for(j = 0; j <= n; j++){
            if(i == 0){
                T[i][j] = j;
            }
            else if(j == 0){
                T[i][j] = i;
            }
            else if(a[i] == b[j]){
                T[i][j] = T[i - 1][j - 1];
            }
                    else{
                        T[i][j] = min(T[i - 1][j], T[i - 1][j - 1], T[i][j - 1]) +1;
                    }
        }
    }
    printf("%d", T[m][n]);
    return 0;
}
                    
    int min(int x, int y, int z){
        return(x < y)?((x < z)?x:z):((y < z)?y:z);
    }
