


// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = nums[0];
//     for(int i=0;i<nums.size()-1;i++) {
//         int p = nums[i];
//         for(int j=i+1;j<nums.size();j++) {
//            result = max(result,p);
//            p *= nums[j];
//         }
//         result = max(result,p);//manages (n-1)th term 
//     }
//     return result;
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }



//Optimised approach - O(N)


#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    if(nums.size()==0) return 0;
    int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}


