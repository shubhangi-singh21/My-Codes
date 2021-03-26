/*Froggie the Frog wants to leap across an integer sequence. He follows some rules :

He can start his journey from any element of the sequence
He can only jump in the forward direction
He can only jump to an integer that is strictly smaller than the integer he is currently at
Froggie wants to know what is the maximum amount of jumps that he can make.

He asks you for help, write a program to solve his problem*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int bs(int[], int, int);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int b[n];
    int x = 1;
    b[0] = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > b[0]){
            b[0] = a[i];
        }
        else if(a[i] < b[x - 1]){
            b[x] = a[i];
            x++;
        }
        else{
            b[bs(b, x, a[i])] = a[i];
        }
    }
    printf("%d", x - 1);
    return 0;
}

int bs(int a[], int n, int k){
    int m, l = -1, h = n - 1;
    while(h - l > 1){
        m = (l+h)/2;
        if(a[m] <= k){
            h = m;
        }
        else{
            l = m;
        }
    }
    return h;
}
