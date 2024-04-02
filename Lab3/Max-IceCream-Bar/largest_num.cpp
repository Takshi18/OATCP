#include <bits/stdc++.h>
using namespace std;


string findLarNum(vector<int> &nums){
    vector<string> s;
    string ans;

    //converting to string
    for(int i=0;i<nums.size();i++){
        s.push_back(to_string(nums[i]));
    }

    //sorting string using lambda function
    sort(s.begin(),s.end(),[](string &s1, string &s2){
        return s1 + s2 > s2 +s1;
    });

    //store in ans
    for(auto it: s){
        ans += it;
    }
    
    //remove leading zero(if any)
    while(ans[0] == '0' and ans.length()>1){
        ans.erase(0,1);   //(index 0, index 1(excluded))

    }

    return ans;


}
int main(){
    int n;
    cin>>n;
   
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    
    string ans = findLarNum(nums);
    cout<<ans<<endl;

    return 0;

}
