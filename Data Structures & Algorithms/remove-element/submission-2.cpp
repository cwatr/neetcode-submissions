class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size()-1;
        bool isPresent=false;
        while(i<=j){
            if(nums[i]==val){
                while(i!=j && nums[j]==val) j--;
                swap(nums[i],nums[j]);
                isPresent=true;
            }
            i++;
        }
        
        if(!isPresent) return nums.size();
        return i-1;
    }
};