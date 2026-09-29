class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        int longest = 1;
       sort (nums.begin(),nums.end());
       int prev = INT_MIN;
       int cnt  = 0 ;
       for ( int i = 0 ;i<nums.size();i++){
        if (prev==nums[i]-1){
           cnt ++;
           prev = nums[i];
        }
        else if (prev!=nums[i]){
            cnt = 1;
            prev=nums[i];
        }
        longest = max (longest,cnt );

       }
       return longest ;
    }
};
