class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.empty()){
        return 0;
       }
        unordered_set <int> s ;
        int longest = 1;
        int cnt = 0;
        for (int i =0 ;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for (auto it : s){
            if (s.find(it-1)==s.end()){
                int x = it ;
                 cnt = 1;
                while (s.find(x+1)!=s.end()){
                    x = x+1;
                    cnt++;
                }
                

            }
            longest = max ( longest , cnt );
        }
        return longest ;
    }
};
