class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        map<int,int> um;
        for(int i = 0; i < bank.size(); i++){
            int flag = 0;
            for(int j = 0; j < bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    flag = 1;
                    um[i]++;
                }
            }
            if(flag == 0){
                um[i] = 0;
            }
        }
        for(auto x: um){
            cout<<x.first<<" "<<x.second<<endl;
        }
        int ans = 0, temp = 1, count = 0;
        int first, sec;
        for(auto x: um){
            if(count == 0){
                sec = x.second;
                count = 1;
            }
            else if(x.second != 0){
                ans += x.second * sec;
                sec = x.second;
            }
        }
        // for(auto x: um){
        //     // cout<<x.first<<" "<<x.second<<endl;
        //     if(x.second != 0 ){
        //         temp = temp*x.second;
        //         if(count != 0){
        //             ans += temp;
        //             temp = x.first;
        //         }
        //         count = 1;
        //         cout<<x.second<<" "<<ans<<endl;         
        //     }
        // }
        return ans;
    }
};