class Solution {
public:

   
    string encode(vector<string>& strs) {
              string s1;
           for(int i=0;i<strs.size();i++)
           {
                s1.append(strs[i]+"`");
           }
            return s1;
           
    }

    vector<string> decode(string s) {
        vector<string> output;

           string temp;
          for(int i=0;i<s.size();i++)
          {
                
            
              
                if(s[i]=='`') 
                { 
                     output.push_back(temp);
                     temp.clear();
                    continue;

                }   


                temp+=s[i];
               

          }

          return output;
    }
};
