class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // keeps track of next non-zero position
        
        // Move all non-zero elements to front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // swap nums[i] and nums[j]
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
    }
};
