#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};

    // Sort the array to start with the first lexicographical permutation
    sort(nums.begin(), nums.end());

    // Find the last permutation
    while (next_permutation(nums.begin(), nums.end()));

    // Print the final permutation
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
