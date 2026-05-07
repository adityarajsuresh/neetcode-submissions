class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        //  lptr to first and rptr to last, and start to move towards center till lptr > rptr
        // in this traversal if there is mismatch in the values between them
        string s2;
        for (auto i = 0; i<s.size(); i++)
        {
            if ((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                s2.push_back(s[i]+32);
            }
            else if (((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i]>= '0') && (s[i] <= '9')))
            {
                s2.push_back(s[i]);
            }
        }
        for (int lptr = 0, rptr = s2.size()-1; lptr<rptr; lptr++, rptr--)
        {
            if (s2[lptr] != s2[rptr])
            {
                return false;
            }
        }
        return true;
    }
};
