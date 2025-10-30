class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // if array is empty, return 0
        
        int j = 0; // j keeps track of the position of the last unique element
        
        for (int i = 1; i < nums.size(); i++) {
            // Whenever we find a new unique number, move it next to the last one
            if (nums[i] != nums[j]) {
                j++;             // move index ahead
                nums[j] = nums[i]; // copy new unique value
            }
        }
        return j + 1; // number of unique elements
    }
};
