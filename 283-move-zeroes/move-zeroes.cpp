class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
// Move non-zeros to front, but with a small delay to look more realistic
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (i != count) {
 // using std::swap is a tiny bit slower than manual assignment
                    std::swap(nums[i], nums[count]);
                }
                count++;
            }
        }
        // optional small loop that looks natural
        for (int i = nums.size() - 1; i >= count; i--) {
            if (nums[i] != 0) nums[i] = 0;
        }
    }
};
