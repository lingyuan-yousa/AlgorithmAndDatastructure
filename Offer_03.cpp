#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i = 0;
        while (i <= nums.size()) {
            while (nums[i] != i && nums[i] != nums[nums[i]]) {
                swap(nums[i], nums[nums[i]]);
            }
            if (nums[i] == i) {
                i++;
            } else if (nums[i] == nums[nums[i]]) {
                return nums[i];
            }
        }
        return 0;
    }
};
int main() {
    system("pause");
    return 0;
}