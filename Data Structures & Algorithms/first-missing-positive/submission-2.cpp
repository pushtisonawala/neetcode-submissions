class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,bool> hashMap;
        int n = nums.size();

        for(int i = 1; i <= n; i++){
            hashMap[i] = false;
        }

        for(int i = 0; i < n; i++){
            if(hashMap.find(nums[i]) != hashMap.end()){
                hashMap[nums[i]] = true;
            }
        }

        for(int i = 1; i <= n; i++){
            if(hashMap[i] == false){
                return i;
            }
        }

        return n + 1;
    }
};