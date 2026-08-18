class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        vector<int> original(n);
 
        for(int i = 0 ; i < n; i++){
                original[(i + k ) % n] = nums[i];
        }

        nums = original;
    }
};
