class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
             
             unordered_map<string,vector<string>> map;
      for(auto& s:strs)
      {
            string sortedS=s;

            sort(sortedS.begin(),sortedS.end());
          map[sortedS].push_back(s);
      }


      vector<vector<string>> output;

      for(auto& s : map)
      {
          output.push_back(s.second);
            
      }
      
         return output;

    }
};
