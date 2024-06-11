class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1 =0;
        int t1 =0;
        while(t1<t.size())
        {
            if(s1==s.size()) return true;
            if(s[s1]==t[t1])
            {
                s1++;
            }
            t1++;
        }
        if(s1==s.size()) return true;
        else return false;
    }
};
