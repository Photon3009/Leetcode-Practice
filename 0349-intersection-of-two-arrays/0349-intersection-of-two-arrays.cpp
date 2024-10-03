class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n= min(nums1.size(),nums2.size());
        unordered_set<int> res;
        if(n==nums1.size()){
            for(auto& i: nums1){
                for(auto& j:nums2){
                    if(i==j) res.insert(i);
                }
            }
        }else{
            for(auto& i: nums2){
                for(auto& j:nums1){
                    if(i==j) res.insert(i);
                }
            }
        }
        vector<int> res1;
        for(auto& i:res){
            res1.push_back(i);
        }
        return res1;
    }
};