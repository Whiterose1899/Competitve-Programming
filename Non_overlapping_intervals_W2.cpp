#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        vector<pair<int, vector<int>>> answers;
        for (int i = 0; i < intervals.size(); i++) {
            answers.push_back(make_pair(intervals[i][1], intervals[i]));
        }
        sort(answers.begin(), answers.end());
        int lastEnd = answers[0].first;
        for (int j = 1; j < answers.size(); j++) {
            if (answers[j].second[0] >= lastEnd) {
                count++;
                lastEnd = answers[j].first;
            }
        }
        return intervals.size() - count - 1;
    }
};
