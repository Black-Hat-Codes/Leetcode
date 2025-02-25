class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,0);
        unordered_map<int,int>hash;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int other=target-nums[i];
            if(hash.find(other)!=hash.end()){
                return {hash[other],i};
            }
            hash[nums[i]]=i;
        }
        return {};
    }
};