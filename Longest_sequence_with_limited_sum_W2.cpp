class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> answers;
        for (int query : queries) {
            int sum = 0;
            int count = 0;
            for (int num : nums) {
                if (sum + num <= query) {
                    sum += num;
                    count++;
                } else {
                    break;
                }
            }
            answers.push_back(count);
        }
        
        return answers;
    }
};
