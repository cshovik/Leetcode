class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int  k =0;  //positional index update when not match

        for(int i=0; i<n; i++ ){
            if(nums[i] != val){
                nums[k] = nums[i]; //if value not match assign that value to kth position
                k++;
            }
        }


        return k;
    }
};
