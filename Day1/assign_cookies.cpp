// https://leetcode.com/problems/assign-cookies/description/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int greed = 0, cookies = 0;
        while(greed < g.size()  && cookies < s.size()){
            if(s[cookies] >= g[greed]){
                greed++;
            }
            cookies++;
        }
        return greed;
    }
};