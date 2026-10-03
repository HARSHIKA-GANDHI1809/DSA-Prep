#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int el1 = 0, el2 = 0;

        for (int num : nums) {
            if (num == el1) {
                count1++;
            } else if (num == el2) {
                count2++;
            } else if (count1 == 0) {
                el1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                el2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == el1) count1++;
            else if (num == el2) count2++;
        }

        std::vector<int> result;
        int min_count = nums.size() / 3;

        if (count1 > min_count) result.push_back(el1);
        if (count2 > min_count) result.push_back(el2);

        return result;
    }
};
