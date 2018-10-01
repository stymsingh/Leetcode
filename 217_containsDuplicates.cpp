#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> nums_set(nums.begin(), nums.end());
    return nums_set.size() != nums.size();
}

int main()
{
    vector<int> arr = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    bool ans = containsDuplicate(arr);
    if (ans == 0)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    return 0;
}