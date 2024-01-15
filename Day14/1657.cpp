// https://leetcode.com/problems/determine-if-two-strings-are-close/description/

bool closeStrings(string word1, string word2) {
         int l1 = word1.size();
         int l2 = word2.size();
         if(l1 != l2) return false;

         vector<int> f1(26),f2(26);

         for(int i = 0; i < l1; i++){
             int idx1 = word1[i] - 'a';
             int idx2 = word2[i] - 'a';
             f1[idx1]++;
             f2[idx2]++;
         }

         for(int i = 0; i < 26; i++){
             if((f1[i] != 0 && f2[i] != 0) || (f1[i] == 0 && f2[i] == 0)) 
                continue;
            else return false;
         }
         sort(f1.begin(), f1.end());
         sort(f2.begin(), f2.end());

         return f1 == f2;
    }