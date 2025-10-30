class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Go through each element
        for (int i = 0; i < nums.size(); i++) {
            // if we find a zero, look ahead for a non-zero to swap
            if (nums[i] == 0) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] != 0) {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break; // stop after swapping one element
                    }
                }
            }
        }
    }
};
