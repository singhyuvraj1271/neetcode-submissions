class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> vec;

       for(int i=0;i<nums.size();i++)
       {
            vec[nums[i]]++;

       }

       for(auto&p: vec)
       {
        if(p.second>1)
        {
            return p.first;
        }
       }

    }
};
