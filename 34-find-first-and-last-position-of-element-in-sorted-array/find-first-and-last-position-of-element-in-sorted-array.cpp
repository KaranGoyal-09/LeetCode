class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> arr (2,-1);
        
        // lower bound of the target
        if(nums.size() == 0 || nums[nums.size()-1] < target || nums[0] > target) return arr;
        else{
            int low  = 0, high = nums.size()-1 ;
            while(low <= high){
                int mid = low +(high - low) /2;
                if(nums[mid] == target){
                    arr[0] = mid;
                    arr[1] = mid;
                    high = mid-1;
                }else if(nums[mid] > target){
                    high = mid -1;
                }else{
                    low = mid +1;
                }
            }
            
        }

        if(arr[0] != -1){
            int low = 0,high = nums.size()-1;
            while(low <= high){
                int mid = low +(high - low)/2;
                if(nums[mid] == target){
                    arr[1] = mid;
                    low = mid+1;
                }else if(nums[mid] > target){
                    high = mid -1;
                }else{
                    low = mid +1;
                }
            }
        }
        return arr;
         
    }
//Thank you ;
//you just forgot to up vote :)
};