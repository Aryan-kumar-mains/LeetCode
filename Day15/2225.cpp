/*https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/
*/


 vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int mx = INT_MIN;
        vector<vector<int>> ans;
        map<int, int> won, loss;
        for(int i = 0; i < matches.size(); i++){
            won[matches[i][0]]++;
            loss[matches[i][1]]++;
        }
        vector<int> temp1;
    /*    
        for(auto w: won){ // 1st case -- there is no any loss
            int count = 0;
            for(auto l: loss){
                if(w.first == l.first){
                    count++;
                }
            }
            if(count == 0){
                temp1.push_back(w.first);
            }
        }
        ans.push_back(temp1);
    */

        for(int i = 0; i < matches.size(); i++){   // 1st case  -- no loss
            if(loss.find(matches[i][0]) == loss.end()){
                temp1.push_back(matches[i][0]);
                loss[matches[i][0]] = -1;  // means, this winner is already taken previously
            }
        }
        sort(temp1.begin(), temp1.end());
        ans.push_back(temp1);



        vector<int> temp2;
        for(auto l: loss){  // 2nd case -- only one loss
            if(l.second == 1){
                temp2.push_back(l.first);
            }
        }
        ans.push_back(temp2);
        return ans;
    }