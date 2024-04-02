#include <bits/stdc++.h>
using namespace std;


int findMaxIceBars(vector<int> &nums,int &coins,int cnt){
    if(nums[0] > coins) return 0;
    for(auto it: nums){
        if(it <= coins){
            cnt++;
            coins -= it;

        }

    }
    return cnt;
}
int main(){
    int n,coins;
    cin>>n;
    cin>>coins;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    sort(nums.begin(),nums.end());

    int ans = findMaxIceBars(nums,coins,0);

    cout<< ans;

    return 0;

}
