class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0; // to count how many non-zero numbers are found

        // Step 1: Move all non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[count] = nums[i];
                count++;
            }
        }

        // Step 2: Fill remaining places with zeros
        for (int i = count; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
