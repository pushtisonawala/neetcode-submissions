class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            while(i < nums.size() && nums[i] == val) {
                i++;
            }

            if(i < nums.size()) {
                ans.push_back(nums[i]);
            }
        }

        nums = ans;

        return nums.size();
    }
};