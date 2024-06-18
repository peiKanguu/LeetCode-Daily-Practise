#pragma once

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // use 'set' to remove duplicate elements
        unordered_set<int> num_set;
        for (const int& num : nums) {
            num_set.insert(num);
        }

        int longestStreak = 0;

        for (const int& num : num_set) {

            // if 'num-1' exits in the set,then 'num' is not the beginning and can be skipped
            if (!num_set.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                // if 'num-1' is not exit,then 'num' is the beginning, the next step is to determine if 'num+1' exits
                // if exits, length++ and should determine if '(num+1)+1' exits 
                while (num_set.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                // update the maximum length
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};



//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        unordered_map <vector<int>, int> mp = {NULL,1};
//        for (int i : nums) {
//            vector<int>tmp;
//            tmp.push_back(i);
//            for (int j : nums) {
//                if (j == i + 1) {
//                    mp[tmp]++;
//                }
//            }
//        }
//    }
//};