class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> fMap;
        for (char ch : s) {
            ++fMap[ch];
        }
        vector<char> uniqueChars;
        for (auto& keyValue : fMap) {
            uniqueChars.push_back(keyValue.first);
        }
        sort(uniqueChars.begin(), uniqueChars.end(), [&](char a, char b) {
            return fMap[a] > fMap[b];
        });

        string result;
        for (char ch : uniqueChars) {
            result += string(fMap[ch], ch);
        }
        return result; 
    }
};