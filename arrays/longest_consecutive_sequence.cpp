#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 0;

    for (int num : st) {
        // start only if it's the beginning
        if (st.find(num - 1) == st.end()) {
            int current = num;
            int count = 1;

            while (st.find(current + 1) != st.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}