class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // pointer to place non-zero elements
        
        // Step 1: move all non-zero numbers to the beginning
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Step 2: fill remaining places with zeros
        while (j < nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};
