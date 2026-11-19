class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> count;

      for(int i=0;i<nums.size();i++)
      {
          count[nums[i]]++;
      }
          vector<pair<int,int>> v;
          for(auto&p : count)
          {    
                   v.push_back({p.second,p.first});    
          }

          sort(v.begin(),v.end(),greater<pair<int,int>>());
           vector<int> output;
          for(int i=0;i<k;i++)
          {
                 output.push_back(v[i].second); 
                
          }

          return output;
        
    }
};
