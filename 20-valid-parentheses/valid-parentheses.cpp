//Valid Paranthesis
class Solution {
public:
    bool isValid(string s) {
        // Create a stack to hold the open brackets
        stack<char> st; 
        // Loop through each character 'c' in the string 's'
        for (char c : s) {   
            // If 'c' is an open bracket
            if (c == '(' || c == '{' || c == '[') {
                // Push it onto the stack
                st.push(c);
            } 
             // If 'c' is a close bracket
            else {
                // Check if the stack is empty
                if (st.empty()) {
                    // If it is, we have a close bracket with no open one
                    return false;
                }
                // If 'c' is ')' check if the top of the stack is '('
                if (c == ')' && st.top() == '(') {
                    st.pop();// It's a match, pop the stack
                }
                    // If 'c' is '}' check if the top of the stack is '{' 
                else if (c == '}' && st.top() == '{') {
                    st.pop();
                } else if (c == ']' && st.top() == '[') {
                    st.pop();//It's a match, pop the stack
                } 
                // If it's a close bracket but doesn't match the top
                else {
                    return false;// It's invalid
                }
            }
        }        
        return st.empty();
    }
};