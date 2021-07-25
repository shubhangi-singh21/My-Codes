/*Leetcode #84 
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
        
        stack<int> mystack;
        for( int i=0; i<n; ++i) //Filling left side limit values
        {
            if(mystack.empty())
            {
                left[i] = 0;
                mystack.push(i);
            }
                else{
                    while(!mystack.empty() and heights[mystack.top()]>=heights[i])
                        mystack.pop();
                    left[i] = mystack.empty()?0:mystack.top()+1;
                    mystack.push(i);
                }
        }
        while(!mystack.empty()) //Clearing stack, reusing it
            mystack.pop();
        
        for( int i=n-1; i>=0; --i) //Filling right side limit values
        {
            if(mystack.empty())
            {
                right[i] = n-1;
                mystack.push(i);
            }
            else
            {
                while(!mystack.empty() and heights[mystack.top()]>=heights[i])
                        mystack.pop();
                    right[i] = mystack.empty()?n-1:mystack.top()-1;
                    mystack.push(i);
            }
                
        }
        
        int mx_area=0; //stores max area
        for( int i = 0; i<n; ++i)
            mx_area= max(mx_area, heights[i]*(right[i]-left[i]+1));
        return mx_area;
    }
};
