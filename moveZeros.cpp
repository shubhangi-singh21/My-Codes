/*Leetcode 283
Time Complexity: O(n) where n is number of elements in input array.
Auxiliary Space: O(1)*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count = 0;  
        for (int i = 0; i < n; i++){
            if (nums[i] != 0)
                nums[count++] = nums[i]; 
        }
        while (count < n){
            nums[count++] = 0;
        }
  }
};
