class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        int lptr = 0, rptr = s.size()-1;
        while(lptr<rptr)
        {
            while ((lptr < rptr) && (!isalnum((unsigned char)s[rptr])))
            {
                rptr--;
            }
            while ((lptr < rptr) && (!isalnum((unsigned char)s[lptr])))
            {
                lptr++;
            }
            if(tolower((unsigned char)s[lptr])!= tolower((unsigned char)s[rptr]))
            {
                return false;
            }
            lptr++;
            rptr--;
        }
        return true;
    }
};
