class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        vector<int>v1,v2;
        sort(nums.begin(),nums.end());
      map<int,int>mpp;
      for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
      }
      for(auto it:mpp){
         v1.push_back(it.first);
      }
          for(auto it:mpp){
         v2.push_back(it.second);
      }
      for(int i=0;i<v2.size();i++){
        for(int j=0;j<v2.size()-1;j++){
           if(v2[j]>v2[j+1]){
            swap(v2[j],v2[j+1]);
            swap(v1[j],v1[j+1]);
           }
           
        }
      }
      for(int i=v1.size()-1;i>=0 && k>0;i--,k--){
        ans.push_back(v1[i]);
      }
            return ans;
    }
};
