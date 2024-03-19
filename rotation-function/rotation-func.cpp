#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int arraySum = 0;
        for (int i : nums) {
            arraySum += i;
        }
        vector<int> dp(nums.size());
        dp[0] = findSum(nums, 0);
        int result = dp[0];
        for (int i = 1; i < nums.size(); i++) {
            int rotationIndex = nums.size() - i;
            dp[i] = dp[i - 1] + (arraySum - nums[rotationIndex]) - ((nums.size() - 1) * nums[rotationIndex]);
            result = max(result, dp[i]);
        }
        return result;
    }
    
    int findSum(vector<int>& nums, int rotation) {
        int sum = 0;
        for (int i = rotation; i < nums.size() + rotation; i++) {
            sum += (i % nums.size()) * nums[i - rotation];
        }
        return sum;
    }
};

int main() {
    Solution sol;
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }


    cout << "Maximum Rotate Function Result: " << sol.maxRotateFunction(nums) << endl;
    return 0;
}
