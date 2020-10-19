//       https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n= nums.size();int i; vector<int> v;
        map<int,int>  mp;  
        for(i=0;i<n;i++){
            mp[nums[i]]++; // count of each element
                 }
        for(int i=0;i<n;i++){ // check if count>n/3
            if(mp[nums[i]]>n/3  && std::find(v.begin(),v.end(),nums[i])==v.end())
                v.push_back(nums[i]);
        }
        return v;
    }
};
