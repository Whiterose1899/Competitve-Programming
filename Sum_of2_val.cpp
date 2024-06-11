#include <bits/stdc++.h>
using namespace std;

int main() {
    int size, target;
    cin >> size >> target;
    vector<pair<int, int>> nums(size);

    for (int i = 0; i < size; i++) {
        int j;
        cin >> j;
        nums[i] = make_pair(j, i + 1); 
    }

    sort(nums.begin(), nums.end());

    int left = 0, right = size - 1;
    bool found = false;

    while (left < right) {
        int sum = nums[left].first + nums[right].first;
        if (sum == target) {
            cout << nums[left].second << " " << nums[right].second << endl;
            found = true;
            break;
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }

    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
