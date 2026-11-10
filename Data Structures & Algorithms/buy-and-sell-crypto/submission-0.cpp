class Solution {
public:
    int maxProfit(vector<int>& prices) {
                 
                int n=prices.size();
        vector<int> vec;
        
        for(int i=1;i<n;i++)
        {
            vec.push_back(prices[i]-prices[i-1]);
        }
            
            int current_sum=0;
            int max_val=INT_MIN;

        for(int i=0;i<n-1;i++)
        {
                  current_sum+=vec[i];

                  max_val=max(max_val,current_sum);

                  if(current_sum<0)
                  {
                    current_sum=0;
                  }

        }  
            
            if(max_val<0)
            {
                return 0;
            }
            
            else{

              return max_val;
            }



    }
          
       

        
    
};
