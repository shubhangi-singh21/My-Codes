//You are given a string containing characters A and B only. Your task is to change it into a string such that there are no matching adjacent characters. 
//To do this, you are allowed to delete zero or more characters in the string.
//Your task is to find the minimum number of required deletions.

/*Sample input
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
*/

/*Sample output
3
4
0
0
4
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        string s;int c=0,a=0;
        cin>>s;
        for(int i=1;s[i]!='\0';i++)
            {
            if((s[i]==65 && s[a]==66)||(s[i]==66 &&s[a]==65))
            {
                a=i;
               // cout<<a<<endl;
               }
                else{
                    c++;
                    //cout<<c<<" "<<i<<endl;
                   
                }
                
            }
        cout<<c<<endl;
        
    }
    return 0;
}
