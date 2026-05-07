class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char, int> s_mpp;
    map<char, int> t_mpp;
    for(auto c:s)
    {   
        s_mpp[c]++;
    }
    for(auto c:t)
    {   
        t_mpp[c]++;
    }
    return s_mpp == t_mpp;
    }
};
