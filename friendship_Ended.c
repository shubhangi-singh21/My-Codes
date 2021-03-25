/*Ramesh is learning to chat on Facebook and he wants to say “Goodbye” (no space between Good and bye) to his friend Suresh. 
Ramesh typed the word w. It is considered that Ramesh managed to say “Goodbye” if several letters can be deleted from the typed word w so that it results in the word "Goodbye". 
For example, if Ramesh types the word "btaGpotodbqqyeekje", it will be considered that he said “Goodbye”, and if he types "pngodtbeyz", it will be considered that he didn't manage to say Goodbye. 
Determine whether Ramesh managed to say “Goodbye” by the given word w to Suresh. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[100000];
    scanf("%s",s);
    char t[10] = "Goodbye";
    int i,j = 0;
    int n = strlen(s);
    int m = strlen(t);//m=5
    for(i = 0; i < n; i++){
        if(s[i] == t[j]){
            j++;
        }
    if(j==m){
        printf("Yes");
        return 0;
    }
    }
        printf("No");
    return 0;
}
