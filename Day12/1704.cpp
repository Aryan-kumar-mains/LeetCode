// https://leetcode.com/problems/determine-if-string-halves-are-alike/description/ 

bool halvesAreAlike(string s) {
        int countA = 0, countB = 0;
        for(int i = 0; i < s.length()/2; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] ==  'O' || s[i] == 'U') countA++;
        }
        for(int i = s.length()/2; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] ==  'O' || s[i] == 'U') countB++;
        }
        cout<<countA<<" "<<countB;
        if(countA == countB) return true;
        return false;
    }

