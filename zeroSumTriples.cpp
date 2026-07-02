#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 2; i++) {

        if(i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = nums.size() - 1;

        while(left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0) {

                ans.push_back({nums[i], nums[left], nums[right]});

                while(left < right && nums[left] == nums[left + 1]) {
                    left++;
                }

                while(left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            }

            else if(sum < 0) {
                left++;
            }

            else {
                right--;
            }
        }
    }

    return ans;
}

int main() {

    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = threeSum(nums);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
    }

    return 0;
}