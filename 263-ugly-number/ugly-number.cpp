class Solution {
public:
    bool isUgly(int n) {
        if(n==0){
            return false;
        }
        for(int i : {2,3,5}){
            while(n%i==0){
                n /= i;
            }
        }
        return n==1;
    }
};

//const int prime: Declares a constant integer variable named prime that will be used to represent each element in the initializer list.

// : {2, 3, 5}: Specifies the initializer list. In this case, it's a list of three integers: 2, 3, and 5.

// for (const int prime : {2, 3, 5}): Combining the above components, this creates a loop that iterates over each element in the initializer list, and in each iteration, the variable prime takes the value of the current element.