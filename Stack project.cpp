#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    // Taking input from the user
    cout << "Enter a string with brackets: ";
    cin >> s;
    char stack[100];  // using a simple array as stack
    int top = -1;     // stack is empty initially
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        // if character is an opening bracket, push it to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            top++;
            stack[top] = ch;
        }
        // if it’s a closing bracket, check if it matches with the top
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) { // no matching opening bracket
                cout << "Invalid expression!" << endl;
                return 0;
            }
            char last = stack[top]; // get top bracket
            // check for valid pairs
            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                cout << "Invalid expression!" << endl;
                return 0;
            }
            top--; // pop the top element
        }
    }
    // if stack is empty at the end -> valid expression
    if (top == -1)
        cout << "Valid expression!" << endl;
    else
        cout << "Invalid expression!" << endl;
    return 0;
}
