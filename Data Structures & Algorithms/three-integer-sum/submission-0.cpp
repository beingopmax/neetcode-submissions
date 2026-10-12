
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;

        for(int i = 0; i < nums.size(); i ++){
            unordered_map<int, int> mpp;

            for(int j = i + 1; j < nums.size(); j ++){
                if(mpp.find(-nums[i] - nums[j]) != mpp.end()){
                    vector<int> temp = {nums[i], nums[j], -nums[i] - nums[j]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                mpp[nums[j]] = nums[j];
            }
        }

        for(auto it : st){
            ans.push_back(it);
        }

        return ans;
    }
};