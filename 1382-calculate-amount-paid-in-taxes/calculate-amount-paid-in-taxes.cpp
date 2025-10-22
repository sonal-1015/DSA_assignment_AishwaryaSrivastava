//calculate amnt paid in taxes
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {        
        // Start the total tax at 0.0
        double tax = 0.0;
        // 'prev' stores the top of the last bracket we finished
        int prev = 0; 
        for (const auto& b : brackets) {
            // 'curr' is the top amount for this bracket (e.g., 10000)
            int curr = b[0];
            // 'rate' is the tax percent for this bracket (e.g., 25)
            int rate = b[1]; 
            // Find how much money to tax in *this* bracket.
            int amt = min(income, curr) - prev;
            if (amt <= 0) {
                break;
            }
            // Calculate the tax for this amount and add it to the total.
            // We divide by 100.0 to get the percentage
            tax += (double)amt * rate / 100.0;         
            prev = curr;
        }
        // Return the final total tax
        return tax;
    }
};