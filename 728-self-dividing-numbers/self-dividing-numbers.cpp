class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> num;
        int temp,sum=0;
        for (int i = left; i <= right; i++) {
            if (i < 10) {
                num.push_back(i);
            } else {
                int n = i;
                bool isSelfDividing = true;
                while (n > 0) {
                    temp = n % 10;
                    if (temp == 0 || i % temp != 0) {
                        isSelfDividing = false;
                        break;
                    }
                    n /= 10;
                }
                if (isSelfDividing) {
                    num.push_back(i);
                }
            }
        }
        return num;
    }
};