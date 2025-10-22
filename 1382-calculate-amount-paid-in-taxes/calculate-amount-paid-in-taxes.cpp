class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int length = brackets.size();
        double taxes = 0.0;
        for (int i = 0; i < length; i++) {
            if (i == 0) {
                // First bracket
                if (brackets[i][0] < income) {
                    taxes += (brackets[i][0] * brackets[i][1] * 1.0) / 100.0;
                } else {
                    taxes += (income * brackets[i][1] * 1.0) / 100.0;
                    break;
                }
            } else if (brackets[i][0] < income) {
                // Middle brackets, for portion between previous and current limit
                taxes += ((brackets[i][0] - brackets[i - 1][0]) * brackets[i][1] * 1.0) / 100.0;
            } else {
                // Final bracket, for remaining income above previous limit
                taxes += ((income - brackets[i - 1][0]) * brackets[i][1] * 1.0) / 100.0;
                break;
            }
        }
        return taxes;
    }
};