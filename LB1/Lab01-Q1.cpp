class Solution {
   public:
    bool isMonotonic(vector<int>& nums) {
        int count = 0;

        if (nums.size() == 1) {
            count++  // return operation
                return true;
        }

        count++;  // bool enq = true;
        count++;  // bool inc = true;
        count++;  // int i = 0;
        bool enq = true;
        bool inc = true;
        int i = 0;

        for (; i < nums.size() - 1; i++) {
            // Loop comparison
            count += 2;  // i < nums.size() - 1
            // Comparison
            count += 4;  // nums[i] != nums[i + 1]
            if (nums[i] != nums[i + 1]) {
                count++;     // enq = false;
                count += 5;  // inc = nums[i] < nums[i + 1];
                enq = false;
                inc = nums[i] < nums[i + 1];
                break;
            }
        }
        for (; i < nums.size() - 1; i++) {
            // Loop comparison
            count += 2;  // i < nums.size() - 1
            // Comparison
            count += 5;  // inc && nums[i] > nums[i + 1]
            if (inc && nums[i] > nums[i + 1]) {
                count++  //
                    return false;
            }
            // Comparison
            count += 5;  // !inc && nums[i + 1] > nums[i]
            if (!inc && nums[i + 1] > nums[i]) {
                return false;
            }
        }
        return true;
    }
};