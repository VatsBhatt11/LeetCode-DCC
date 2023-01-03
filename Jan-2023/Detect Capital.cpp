class Solution {
public:
    bool detectCapitalUse(string word) {
        int l=word.length();
        int cnt=0;
        for(int i=0;i<l;i++)
        {
            if(isupper(word[i]))
                cnt++;
        }
        if(l==cnt || cnt==0)
            return true;
        else if(isupper(word[0]) && cnt==1)
            return true;
        return false;
    }
};
