class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long long int minInt = INT_MIN, first = minInt - 1, second = minInt -1 , third = minInt -1;
        for(int i = 0; i < n; i++){
            long long int curr = nums[i];
            if(curr == first || curr == second || curr == third){
                continue;
            }
            if(curr > first){
                third = second;
                second = first;
                first = curr;
            }else if(curr > second){
                third = second;
                second = curr;
            }else if(curr > third){
                third = curr;
            }
        }
        if(third == minInt - 1){
            return (int)first;
        }
        return (int)third;
    }
};
