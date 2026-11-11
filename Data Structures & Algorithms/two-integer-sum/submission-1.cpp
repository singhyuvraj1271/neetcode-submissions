class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> map;
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {

            if(map.count(target-nums[i]))
            {
                       vec.push_back(map[target-nums[i]]);
                       vec.push_back(i);
            }


            else{


                map[nums[i]]=i;
            }
        }


        sort(vec.begin(),vec.end());

        return vec;
        
    }
};
