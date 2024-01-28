class Solution {
public:
    bool isValid(string s) {
        stack<char> leftSymbols;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                leftSymbols.push(c);
            } else if (!leftSymbols.empty() && 
                       ((c == ')' && leftSymbols.top() == '(') ||
                        (c == '}' && leftSymbols.top() == '{') ||
                        (c == ']' && leftSymbols.top() == '['))) {
                leftSymbols.pop();
            } else {
                return false;
            }
        }

        return leftSymbols.empty();
    }
};