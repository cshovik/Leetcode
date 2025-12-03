class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return ""; 
        int n= strs.size();// no of array
        
        for(int charind =0 ; charind <= strs[0].size(); charind++) // rotate ch of first str
        {
            for(int strind = 1; strind < n ; strind++)// rotate other string
            {
                if(charind >= strs[strind].size() || strs[0][charind] != strs[strind][charind])
                {
                    return strs[0].substr(0,charind);
                }
            }
        }
        return strs[0];
        
    }
};
