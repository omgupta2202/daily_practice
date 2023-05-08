class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=nums.size();
        for(int j=0;j<k;j++){
        if(nums[j]==0){
            for(int i=j;i<k-1;i++){
            nums[i]=nums[i+1];
            }
            nums[k-1]=0;
            j--;
        }
        }  
    }
};