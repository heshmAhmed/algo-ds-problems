class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int count1[30] = {0};
        int count2[30] = {0};
        for(int i = 0;i < s.length();i++) {
            count1[(int) s[i] - (int) 'a'] += 1;
            count2[(int) t[i] - (int) 'a'] += 1; 
        }
        for(int i = 0;i < 30;i++){
            if(count1[i] != count2[i])
                return false;
        }
        return true;
    }
};