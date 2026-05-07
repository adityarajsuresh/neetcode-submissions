class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char, int> s_mpp;
    map<char, int> t_mpp;
    for(auto c:s)
    {   
        if (s_mpp.find(c)!= s_mpp.end()) // if character in map, check for freq
        {
            s_mpp[c]++;
        }
        else
        {
            s_mpp[c] = 1;
        }
    }
    for(auto c:t)
    {   
        if (t_mpp.find(c)!= t_mpp.end()) // if character in map, check for freq
        {
            t_mpp[c]++;
        }
        else
        {
            t_mpp[c] = 1;
        }
        
    }
    if (s_mpp == t_mpp)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
};
