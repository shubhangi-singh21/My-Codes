class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::sort(heights.begin(), heights.end(), greater<int>());
        if(heights.size()==1)
                return heights[0];
        else if(heights[1]==0)
            return heights[0];
        else 
            return heights[1]*2;
        return 0;
    }
};
