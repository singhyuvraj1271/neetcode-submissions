class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         
         if(nums.size()==0)
         {
            return 0;
         }
         
         map<int,int>seq;

         for(int i=0;i<nums.size();i++)
         {

            seq[nums[i]]++;

         }
        vector<int> temp;
        map<int,int,greater<int>> result;

         for(auto&p:seq)
         {
              temp.push_back(p.first);
         }
                int count=1;
         for(int i=0;i+1<temp.size();i++)
         {
            if(temp[i+1]-temp[i]==1)
            {  count++;

            }

            else{
               result[count]++;
                count=1;
            }
         }
         result[count]++;

         for(auto&p:result)
         {
              return p.first;
         }

         return 0;
    }
};
