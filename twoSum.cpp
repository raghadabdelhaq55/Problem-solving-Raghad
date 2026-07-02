#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++) {

        int need = target - nums[i];

        if (m.find(need) != m.end()) {
            return { m[need], i };
        }

        m[nums[i]] = i;
    }

    return {};
}

int main() {

    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    cout << "Indices are: " << result[0] << " " << result[1];

    return 0;
}