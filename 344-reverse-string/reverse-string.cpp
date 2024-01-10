class Solution {
public:
    void reverseString(vector<char>& s) {
        int end = s.size();
        for (int i = 0; i < end / 2; i++)
        swap(s[i], s[end - i - 1]);
    }
};