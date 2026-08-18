class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted_array = nums; 
        sort(sorted_array.begin() , sorted_array.end());

        for(int x = 0 ; x < nums.size() ; x++){
            bool matches=true;
            for(int i = 0 ; i < nums.size() ; i++){
            if(sorted_array[i] != nums[(i + x) % nums.size()]){
                matches = false;
                break;
            }
            }

            if(matches) return true;
        }
        return false;
    }
};
