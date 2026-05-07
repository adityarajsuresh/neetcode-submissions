class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        //  lptr to first and rptr to last, and start to move towards center till lptr > rptr
        // in this traversal if there is mismatch in the values between them
        int len = 0, j=0;
        string s2;
        for (auto i = 0; i<s.size(); i++)
        {
            //len++;
            if ((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                using namespace std;
                
                //s[i] = s[i]+32;
                s2.push_back(s[i]+32);
                //std::cout<<s2[j];
            }
            else if (((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i]>= '0') && (s[i] <= '9')))
            {
                
                //std::cout<<s[i];
                s2.push_back(s[i]);
                //std::cout<<s2[j];
            }
        }
        
        for (int lptr = 0, rptr = s2.size()-1; lptr<rptr; lptr++, rptr--)
        {
            if (s2[lptr] != s2[rptr])
            {
                //std::cout<<s2[lptr]<<"&&"<<s2[rptr]<<endl;
                return false;
            }
        }
        return true;
    }
};
