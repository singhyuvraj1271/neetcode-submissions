class Solution {
public:
    bool isAnagram(string s, string t) {
        
      if(s.size()!=t.size())
      {
        return false;
      }
           unordered_map<char,int> map;

         
        for(int i=0;i<s.size();i++)
        {
                 map[s[i]]=0;

        }  

        for(int i=0;i<s.size();i++)
        {
                 map[s[i]]++;

        }

        for(int i=0;i<t.size();i++)
        {
            if(map.count(t[i]))
            {
                 map[t[i]]--;
                 
                 if(map[t[i]]<0)
                 {
                    return false;
                 }


            }
            
            else{
                return false;
            }
        }

        return true;


    }
};
