/*Rohan has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. 
Rohan typed the word s. It is considered that Rohan managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". 
For example, if Rohan types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Rohan got misunderstood and he didn't manage to say hello. 
Determine whether Rohan managed to say hello by the given word s. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[101];
    scanf("%s",s);
    char t[10] = "hello";
    int i,j;
    int l = strlen(s);
    int m = strlen(t);//m=5
    for(i = 0, j=0; i < l && j < m; i++){
        if(s[i] == t[j]){
            j++;
        }
    }
    if(j==m){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
