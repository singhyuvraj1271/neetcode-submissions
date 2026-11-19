class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, stack<int>> num;

        for (int i = 0; i < numbers.size(); i++) {
            num[numbers[i]].push(i+1);
        }

        vector<int> result;
        // finding 
        int count=0;
        for (auto& p : num) {
            int s = target - p.first;

            if (num.count(s)==1&&p.first!=s) {
                result.push_back(num[p.first].top());
                result.push_back(num[s].top());
                
                count=1;
            }
            
              if (num.count(s)==1&&p.first==s) {
                result.push_back(num[p.first].top());
                   num[p.first].pop();
                result.push_back(num[p.first].top());
                
                count=1;
            }
           
            if(count==1)
            {
                break;
            }

        }
         sort(result.begin(),result.end());
       
        return result;
    }


};
